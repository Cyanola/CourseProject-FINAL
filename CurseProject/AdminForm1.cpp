#include "AdminForm1.h"
#include "Functions.h"
#include "Classes.h"

using namespace System;

System::Void CurseProject::AdminForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = "Повесть ";
	str += textBox8->Text->ToString() + " "
		+ numericUpDown2->Text->ToString() + " "
		+ textBox6->Text->ToString() + " "
		+ numericUpDown1->Text->ToString() + " "
		+ numericUpDown3->Text->ToString();
	std::string temp = Stos(str);
	std::ofstream File(FILE_MAIN_NAME, std::ios::app);
	File << "\n" << temp;
	MessageBox::Show("Успешно", "Состояние");
	File.close();
	this->Close();
}

