#include "pch.h"

#include "Watermark.h"

#include <eh.h>
#include <cmath>

bool bWatermark = true;
bool bWatermarkFPS = true;

void GUI::Render()
{
	if (bWatermark)
		showWatermark(bWatermarkFPS, Cheat::Title.c_str(), ImVec4(255, 255, 255, 255), ImVec4(255, 255, 255, 0));

	if (bMenuOpen)
	{
		ImGui::SetNextWindowSize(ImVec2(WIDTH, HEIGHT));
		ImGui::Begin(Cheat::Title.c_str(), NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);

		ImGui::BeginChild("Cheat", ImVec2(ImGui::GetContentRegionAvail().x / 3, ImGui::GetContentRegionAvail().y), true);
		{
			ImGui::Text("Cheat");
			ImGui::Spacing();

			if (ImGui::Button("Unload"))
				Cheat::bShouldRun = false;
			ImGui::SameLine();
			if (ImGui::Button(Cheat::console.get()->GetVisibility() ? "Hide Console" : "Show Console"))
				Cheat::console.get()->ToggleVisibility();

			//ImGui::Checkbox("Extra Debug Info", &bExtraDebug);

			ImGui::Checkbox("Watermark", &bWatermark);
			if (bWatermark)
				ImGui::Checkbox("Watermark FPS", &bWatermarkFPS);
		}
		ImGui::EndChild();

		for (size_t i = 0; i < Features.size(); i++)
		{
			Features[i].get()->DrawMenuItems();
		}

		ImGui::End();
	}

	//
	//	Other Render Stuff
	//

#if FRAMEWORK_UNREAL
	auto pUnreal = Cheat::unreal.get();
	pUnreal->RefreshActorList();
#endif

	for (size_t i = 0; i < Features.size(); i++)
	{
		Features[i].get()->Render();

		//std::thread thread(&Feature::Render, Features[i].get());
		//thread.detach();
	}

	CG::ADIPlayerCharacter* DIPlayer = pUnreal->GetDIPlayer();
	if (DIPlayer)
	{
		CG::USimpleHealthComponent* HealthComponent = DIPlayer->HealthComponent;
		if (HealthComponent)
			if (HealthComponent->Health != HealthComponent->MaxHealth)
				HealthComponent->Health = HealthComponent->MaxHealth;

		CG::UStaminaComponent* StaminaComponent = DIPlayer->StaminaComponent;
		if (StaminaComponent)
			if (StaminaComponent->Stamina != StaminaComponent->MaxStamina)
				StaminaComponent->Stamina = StaminaComponent->MaxStamina;

		//CG::UDamageableComponent* DamageComponent = DIPlayer->DamageComponent;
		//CG::UDamageableComponent* DamageableComponenet = DIPlayer->DamageableComponent;
	}

	//
	// End Other Render Stuff
	//
}