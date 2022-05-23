#include "LibrarianForm4.h"
#include "Functions.h"
#include "Classes.h"
System::Void CurseProject::LibrarianForm4::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = "Rasskaz ";
	str += textBox1->Text->ToString() + " "
		+ numericUpDown2->Text->ToString() + " "
		+ textBox4->Text->ToString() + " "
		+ numericUpDown1->Text->ToString() + " "
		+ numericCount->Text->ToString();
	std::string temp = Stos(str);
	std::ofstream File(MAIN_BOOKS, std::ios::app);
	File << "\n" << temp;
	MessageBox::Show("Успешно", "Состояние");
	File.close();
	this->Close();
}

