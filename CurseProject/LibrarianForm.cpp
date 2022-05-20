#include "LibrarianForm.h"
#include "LoginForm.h"
#include "Functions.h"
#include "Classes.h"
#include "LibrarianForm1.h"
#include "LibrarianForm2.h"
#include "LibrarianForm3.h"
#include "LibrarianForm4.h"
#include "LibrarianForm5.h"
#include "LibrarianForm6.h"

using namespace System;
System::Void CurseProject::LibrarianForm::ShowL_Click(System::Object^ sender, System::EventArgs^ e)
{
	Show_Admin_retry();
}

void CurseProject::LibrarianForm::ShowLibrarian()
{
	Librarian admin;
	std::vector<std::string> v;
	v = admin.Print_Admin_data();
	int temp = 0;
	dataGridView1->TopLeftHeaderCell->Value = "id";
	for (int i = 0; i < v.size(); i++)
	{
		dataGridView1->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1->Columns[0]->HeaderCell->Value = "#";
		dataGridView1->Rows[temp]->Cells[0]->Value = "->";
		dataGridView1->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
		temp++;
	}
	dataGridView1->AutoResizeColumn(0);
	dataGridView1->AutoResizeRows();
}

Void CurseProject::LibrarianForm::HeaderLibrarian()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Librarian View";
	c1->Width = 150;
	dataGridView1->Columns->Add(c1);

	dataGridView1->AutoResizeColumn(0);
}

System::Void CurseProject::LibrarianForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	LoginForm^ form = gcnew LoginForm();
	form->Show();
}

System::Void CurseProject::LibrarianForm::Dat_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Успешно", "Состояние");
	SetData();
}

System::Void CurseProject::LibrarianForm::Povest_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm1^ form1 = gcnew LibrarianForm1;
	form1->ShowDialog();
}
System::Void CurseProject::LibrarianForm::Stih_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm2^ form2 = gcnew LibrarianForm2;
	form2->ShowDialog();
}
System::Void CurseProject::LibrarianForm::Roman_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm3^ form3 = gcnew LibrarianForm3;
	form3->ShowDialog();
}

System::Void CurseProject::LibrarianForm::Rasskaz_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm4^ form4 = gcnew LibrarianForm4;
	form4->ShowDialog();
}
System::Void CurseProject::LibrarianForm::Skazka_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm5^ form5 = gcnew LibrarianForm5;
	form5->ShowDialog();
}

System::Void CurseProject::LibrarianForm::Piesa_Click(System::Object^ sender, System::EventArgs^ e)
{
	LibrarianForm6^ form6 = gcnew LibrarianForm6;
	form6->ShowDialog();
}

void CurseProject::LibrarianForm::Show_Admin_retry()
{
	Librarian ad;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->RowCount = ad.GetCount();

	HeaderLibrarian();
	ShowLibrarian();

}