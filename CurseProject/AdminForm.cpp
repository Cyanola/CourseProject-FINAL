#include "AdminForm.h"
#include "LoginForm.h"
#include "Functions.h"
#include "Classes.h"
#include "AdminForm1.h"
#include "AdminForm2.h"
#include "AdminForm3.h"
#include "AdminForm4.h"

using namespace System;
System::Void CurseProject::AdminForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	LoginForm^ form = gcnew LoginForm();
	form->Show();
}
System::Void CurseProject::AdminForm::Povest_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm1^ form1 = gcnew AdminForm1;
	form1->ShowDialog();
}
System::Void CurseProject::AdminForm::Stih_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm2^ form2 = gcnew AdminForm2;
	form2->ShowDialog();
}
System::Void CurseProject::AdminForm::Roman_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm3^ form3 = gcnew AdminForm3;
	form3->ShowDialog();
}
System::Void CurseProject::AdminForm::Rasskaz_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm4^ form4 = gcnew AdminForm4;
	form4->ShowDialog();
}