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

System::Void CurseProject::AdminForm::ShowA_Click(System::Object^ sender, System::EventArgs^ e)
{
	Show_Admin_retry();
}
void CurseProject::AdminForm::ShowAdmin()
{
	Admin admin;
	std::vector<std::string> v;
	v = admin.Print_Admin_data();
	int temp = 0;
	dataGridView1->TopLeftHeaderCell->Value = "id";
	for (int i = 0; i < v.size(); i++)
	{
		dataGridView1->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1->Columns[0]->HeaderCell->Value = "####";
		dataGridView1->Rows[temp]->Cells[0]->Value = "--->";
		dataGridView1->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
		temp++;
	}
	dataGridView1->AutoResizeColumn(0);
	dataGridView1->AutoResizeRows();
}

Void CurseProject::AdminForm::HeaderAdmin()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Only Admin view";
	c1->Width = 150;
	dataGridView1->Columns->Add(c1);

	dataGridView1->AutoResizeColumn(0);
}
System::Void CurseProject::AdminForm::Dat_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Успешно", "Состояние");
	SetData();
}
void CurseProject::AdminForm::Show_Admin_retry()
{
	Admin ad;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->RowCount = ad.GetCount();

	HeaderAdmin();
	ShowAdmin();

}