#include "LoginUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	demooop::LoginUI form;
	Application::Run(% form);
}