#include "LibrarianForm3.h"
#include "Functions.h"
#include "Classes.h"
System::Void CurseProject::LibrarianForm3::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = "Roman ";
	str += textBox1->Text->ToString() + " "
		+ numericUpDown2->Text->ToString() + " "
		+ textBox4->Text->ToString() + " "
		+ numericUpDown1->Text->ToString() + " "
		+ numericCount->Text->ToString();
	std::string temp = Stos(str);
	std::ofstream File(MAIN_BOOKS, std::ios::app);
	File << "\n" << temp;
	MessageBox::Show("�������", "���������");
	File.close();
	this->Close();
}
