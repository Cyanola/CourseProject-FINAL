#include "AdminForm4.h"
#include "Functions.h"
#include "Classes.h"
System::Void CurseProject::AdminForm4::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str = "Рассказ ";
	str += textBox1->Text->ToString() + " "
		+ numericUpDown2->Text->ToString() + " "
		+ textBox4->Text->ToString() + " "
		+ numericUpDown1->Text->ToString() + " "
		+ numericCount->Text->ToString();
	std::string temp = Stos(str);
	std::ofstream File(FILE_MAIN_NAME, std::ios::app);
	File << "\n" << temp;
	MessageBox::Show("Успешно", "Состояние");
	File.close();
	this->Close();
}

