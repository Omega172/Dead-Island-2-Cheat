#include "pch.h"
#include "ESP.h"

bool ESP::Setup()
{
	Root = CG::FName("Root");

	PlayerStaticClass = CG::ADIPlayerCharacter::StaticClass();

	ZombieStaticClass = CG::ADIAICharacter::StaticClass();

	// Hostile
	// Sutff

	this->Initalized = true;

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Initalized");

	return this->Initalized;
}

void ESP::Destroy()
{
	if (!this->Initalized)
		return;

	// Reset any values to defaults

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Destroyed");
	this->Initalized = false;
}

void ESP::DrawMenuItems()
{
	if (!this->Initalized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y), true);
	{
		ImGui::Text("ESP");
		ImGui::Spacing();

		ImGui::Checkbox("ESP Enabled", &bESP);
		ImGui::SliderInt("Distance", &iESPDistance, 0, 5000);

		ImGui::Checkbox("Boxes", &bBoxESP);
		ImGui::SameLine();
		if (ImGui::BeginCombo("Box Flags", "", ImGuiComboFlags_NoPreview))
		{
			ImGui::Selectable("Name", &bBoxName);
			ImGui::Selectable("Distance", &bBoxDistance);

			ImGui::EndCombo();
		}

		if (!bBoxESP)
			ImGui::Checkbox("Name at Root", &bNameESP);

		ImGui::Checkbox("Draw Bones", &bESPDrawBones);
		ImGui::SameLine();
		if (ImGui::BeginCombo("Bones Flags", "", ImGuiComboFlags_NoPreview))
		{
			if (ImGui::Selectable("Numbers", !bESPBonesDot))
				bESPBonesDot = false;

			if (ImGui::Selectable("Dots", bESPBonesDot))
				bESPBonesDot = true;

			ImGui::EndCombo();
		}

		ImGui::Separator();

		ImGui::Text("ESP Other");
		ImGui::Spacing();

		ImGui::Checkbox("Draw Debug Boxes", &bAllDebug);
		ImGui::Checkbox("Draw All Origins", &bDrawAll);
	}
	ImGui::EndChild();
}

void ESP::Render()
{
	if (!this->Initalized || !this->bESP)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::ADIPlayerCharacter* DIPlayer = pUnreal->GetDIPlayer();
	if (!DIPlayer)
		return;

	//CG::AFGPlayerController* PlayerController = FGPlayer->GetFGPlayerController();
	//if (!PlayerController)
		//return;

	if (bDrawAll)
	{
		DrawAllOrigins();
		return;
	}

	for (CG::AActor* Actor : pUnreal->Actors)
	{
		if (!Actor)
			continue;

		if (Actor->IsA(ZombieStaticClass))
		{
			ZombieESP(reinterpret_cast<CG::ADIAICharacter*>(Actor));
			continue;
		}
	}
}

void ESP::ZombieESP(CG::ADIAICharacter* Zombie)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::ADIPlayerCharacter* DIPlayer = pUnreal->GetDIPlayer();
	if (!DIPlayer)
		return;

	CG::USkeletalMeshComponent* Mesh = Zombie->GetDSMesh();
	if (!Mesh)
		return;

	CG::USimpleHealthComponent* HealthComponent = Zombie->HealthComponent;
	if (!HealthComponent)
		return;

	if (HealthComponent->IsDead())
		return;

	CG::FVector WorldPos = Mesh->GetSocketLocation(Root);

	int Distance = static_cast<int>(round(DIPlayer->K2_GetActorLocation().DistanceMeter(WorldPos)));
	if (iESPDistance && Distance > iESPDistance)
		return;

	if (bESPDrawBones)
	{
		for (size_t i = 0; i < Mesh->GetNumBones(); i++)
		{
			CG::FName Bone = Mesh->GetBoneName(static_cast<int32_t>(i));
			std::string BoneName = Bone.GetName();

			CG::FVector WorldPos = Mesh->GetSocketLocation(Bone);
			CG::FVector2D ScreenPos = pUnreal->W2S(WorldPos);
			if (ScreenPos.IsValid())
				continue;

			if (bESPBonesDot)
			{
				ImGui::GetBackgroundDrawList()->AddCircle(ScreenPos, 3.f, Black, 32);
				ImGui::GetBackgroundDrawList()->AddCircle(ScreenPos, 1.f, White, 32);
			}
			else
				ImGui::OutlinedText(ScreenPos, White, std::to_string(i).c_str());
		}
	}

	CG::FVector2D ScreenPos = pUnreal->W2S(WorldPos);
	if (ScreenPos.IsValid())
		return;

	CG::FName fName = Zombie->Name;
	std::string Name = Zombie->UiName.ToString();
	std::string Size = "Normal";

	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	if (bNameESP && !bBoxESP)
	{
		if (Name == fName.GetName())
			std::cout << Name << std::endl;

		ImVec2 Screen = ScreenPos;

		ImVec2 Pos = { Screen.x - (TextSize.x / 2), Screen.y - 7.f };
		ImGui::OutlinedText(Pos, White, Name.c_str());
	}

	if (bBoxESP)
		DrawBox(Zombie, Name, TextSize, Size, Distance);

	if (bAllDebug)
		DrawDebugBox(Zombie, Distance);
}