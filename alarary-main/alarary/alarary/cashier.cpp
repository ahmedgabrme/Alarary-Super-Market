#include "cashier.h"
#include "fatoora_savy.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew alarary::cashier);

}
