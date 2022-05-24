#include "LoginForm.h"
#include "LibraryForm.h"
#include "AutorizationForm.h"
#include "Functions.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CurseProject::LoginForm form;
	Application::Run(% form);
}
System::Void CurseProject::LoginForm::AdminButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	AutorizationForm^ form1 = gcnew AutorizationForm();
	form1->Show();
}

System::Void CurseProject::LoginForm::ChitatelButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	ReturnData();
	Form::Hide();
	LibraryForm^ form2 = gcnew LibraryForm();
	form2->Show();
}
