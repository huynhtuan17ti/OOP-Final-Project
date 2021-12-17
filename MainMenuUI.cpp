#include "MainMenuUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	demooop::MainMenuUI form;
	Application::Run(% form);
}