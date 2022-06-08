#include "form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ argc) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculator::form form1;
	Application::Run(%form1);
}

