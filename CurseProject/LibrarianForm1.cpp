#include "LibrarianForm1.h"
#include "Functions.h"
#include "Classes.h"

using namespace System;

System::Void CurseProject::LibrarianForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = "Povest ";
	str += textBox8->Text->ToString() + " "
		+ numericUpDown2->Text->ToString() + " "
		+ textBox6->Text->ToString() + " "
		+ numericUpDown1->Text->ToString() + " "
		+ numericUpDown3->Text->ToString();
	std::string temp = Stos(str);
	std::ofstream File(MAIN_BOOKS, std::ios::app);
	File << "\n" << temp;
	MessageBox::Show("�������", "���������");
	File.close();
	this->Close();
}

