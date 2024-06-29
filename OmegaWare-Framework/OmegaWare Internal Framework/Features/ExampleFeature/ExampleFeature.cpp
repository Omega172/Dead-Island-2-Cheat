#include "pch.h"

ExampleFeature::ExampleFeature() {};

bool ExampleFeature::Setup()
{
	Localization::AddToLocale("ENG", std::initializer_list<std::pair<size_t, std::string>>{
		{ "EXAMPLE_FEATURE"Hashed, "Example Feature" },
		{ "EXAMPLE_FEATURE_HW"Hashed, "Hello, World!" },
		{ "EXAMPLE_FEATURE_SLIDER"Hashed, "Example Slider" },
		{ "EXAMPLE_COLORPICKER"Hashed, "Example Color Picker" }
	});

	Localization::AddToLocale("GER", std::initializer_list<std::pair<size_t, std::string>>{
		{ "EXAMPLE_FEATURE"Hashed, "Beispiel funktion" },
		{ "EXAMPLE_FEATURE_HW"Hashed, "Hallo Welt!" },
		{ "EXAMPLE_FEATURE_SLIDER"Hashed, "Beispiel Slider" },
		{ "EXAMPLE_COLORPICKER"Hashed, "Beispiel Farbwähler" }
	});

	Localization::AddToLocale("POL", std::initializer_list<std::pair<size_t, std::string>>{
		{ "EXAMPLE_FEATURE"Hashed, "Przykładowa Funkcja" },
		{ "EXAMPLE_FEATURE_HW"Hashed, "Cześć Świecie!" },
		{ "EXAMPLE_FEATURE_SLIDER"Hashed, "Przykładowy suwak" },
		{ "EXAMPLE_COLORPICKER"Hashed, "Przykładowy próbnik kolorów" }
	});

	LogDebugHere("Feature: ExampleFeature Initialized");

	Initialized = true;
	return Initialized;
}

void ExampleFeature::Destroy() { Initialized = false; }

void ExampleFeature::HandleKeys() {}

void ExampleFeature::Render()
{
	CG::ADIAICharacter::StaticClass();

	Unreal* pUnreal = Framework::unreal.get();
	std::vector<CG::ADIAICharacter*> pActors = pUnreal->GetActors<CG::ADIAICharacter>();

	for (CG::ADIAICharacter* pActor : pActors)
	{
		CG::USimpleHealthComponent* pHealthComponent = reinterpret_cast<CG::USimpleHealthComponent*>(pActor->GetHealthComponent());
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
			break;

		CG::FVector vecLocation, vecExtent;
		pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

		CG::FVector2D vecScreen;
		if (pUnreal->WorldToScreen(vecLocation, vecScreen))
		{
			char szName[64];
			szName[pActor->Name.GetName().copy(szName, 63, 0)] = 0;
			ImGui::OutlinedText({ vecScreen.X, vecScreen.Y }, White, szName);
		}
	}
}

void ExampleFeature::Run() {}

void ExampleFeature::HandleMenu()
{
	static std::once_flag onceflag;
	std::call_once(onceflag, [this]() {
		GuiSection->SetCallback([]() {
			ImGuiContext* pContext = ImGui::GetCurrentContext();

			ImVec2 vec2Size = (Framework::menu->m_stStyle.vec2Size / ImVec2{ 3.f, 2.f }) - pContext->Style.ItemSpacing;
			ImVec2 vec2MaxSize = ImGui::GetContentRegionAvail();

			if (vec2Size.x > vec2MaxSize.x)
				vec2Size.x = vec2MaxSize.x;

			if (vec2Size.y > vec2MaxSize.y)
				vec2Size.y = vec2MaxSize.y;

			return vec2Size;
		});

		GuiSection->AddElement(GuiCheckbox.get());

		GuiCheckbox->AddElement(GuiEnabledText.get());
		GuiCheckbox->AddElement(GuiEnabledSlider.get());

		GuiSection->AddElement(GuiColorPickerLabel.get());
		GuiSection->AddElement(GuiColorPicker.get());
	});

	if (!GuiSection->HasParent())
		Framework::menu->AddElement(GuiSection.get());

	GuiCheckbox->SetChildrenVisible(GuiCheckbox->GetValue());
}