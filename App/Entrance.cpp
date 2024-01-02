#include "Entrance.h"
#using <System.dll>
#using <System.Windows.Forms.dll>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;


[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	App::Entrance form;
	Application::Run(% form);
	return 0;
}