#include "LibraryForm.h"
#include "Classes.h"
#include "Functions.h"
#include "LoginForm.h"
#include "MyForm.h"
using namespace System::Windows::Forms;
using namespace System::Threading;
using namespace System::Threading::Tasks;
using namespace System::Runtime::InteropServices;
System::Void CurseProject::LibraryForm::ALL_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Object_ obj; auto v = obj.Print(); obj.item();
	dataGridData->RowCount = obj.GetCount();
	if (v[NULL] == "") {
		MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс...");
		dataGridData->Rows->Clear();
		dataGridData->Columns->Clear();
	}
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		Show();
	}
}

System::Void CurseProject::LibraryForm::Povest_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Povest_ povest; Object_ obj;
	auto v = obj.Print();
	dataGridData->RowCount = povest.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowPovest();
	}
}
System::Void CurseProject::LibraryForm::Stih_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Stih_ stih; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = stih.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowStih();
	}
}
System::Void CurseProject::LibraryForm::Skazka_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Skazka_ skazka; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = skazka.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowSkazka();
	}
}
System::Void CurseProject::LibraryForm::Myth_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Myth_ myth; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = myth.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowMyth();
	}
}

System::Void CurseProject::LibraryForm::Roman_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Roman_ roman; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = roman.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowRoman();
	}
}

System::Void CurseProject::LibraryForm::Rasskaz_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Rasskaz_ rasskaz; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = rasskaz.GetCount();
	if (v[0] == "") MessageBox::Show("Библиотека закрыта, ведется уборка помещения", "Упсс....");
	else
	{
		Headers();
		dataGridData->AutoResizeRows();
		ShowRasskaz();
	}
}

System::Void CurseProject::LibraryForm::butbask_Click(System::Object^ sender, System::EventArgs^ e)
{
	Basket_ basket; auto valuebasket_temp = basket.GetBK();
	if (valuebasket_temp[NULL] == "") { MessageBox::Show("Ваша корзина пуста", "Упс..."); }
	else
	{

		dataGridData->Rows->Clear();
		dataGridData->Columns->Clear();
		dataGridData->RowCount = basket.GetBC();
		Headers_B();
		ShowBask();
	}
}

System::Void CurseProject::LibraryForm::Bask_Click(System::Object^ sender, System::EventArgs^ e)
{
	Basket_ basket; Object_ object; vector<string> vector_items;
	String^ temp_current_Cell;
	int ask; object.item();
	vector_items = object.Print();
	////
	if (vector_items.empty())
	{
		dataGridData->Rows->Clear();
		dataGridData->Columns->Clear();
	}
	else {
		object.item();
		temp_current_Cell = dataGridData->CurrentCell->Value->ToString();
		try {
			ask = Convert::ToInt16(temp_current_Cell);
			if ((ask > object.GetCount()) || (vector_items[NULL] == "")) { MessageBox::Show("Индекс не принадлежит диапазону", "Упс"); }
			else {
				object.Basket(ask);
				dataGridData->Rows->Clear();
				dataGridData->Columns->Clear();
				dataGridData->RowCount = object.GetCount();
				vector_items = object.Print();
				if (!vector_items.empty()) {
					Headers();
					Show();
				}
				else
				{
					dataGridData->Rows->Clear();
					dataGridData->Columns->Clear();
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Неизвестная ошибка", "Упс...");
		}
	}
}

System::Void CurseProject::LibraryForm::button2_Click(System::Object^ sender, System::EventArgs^ e) // заказ
{
	Basket_ basket_name;
	auto basket_temp_name = basket_name.GetBK();
	if (basket_temp_name[NULL] == "") MessageBox::Show("Вы не выбрали книги", "Упс...");
	else
	{
		
		srand(time(NULL));
		int day = 1 + rand() % 30;
		this->temp = gcnew Temp();
		this->temp->order_id = Guid::NewGuid();
		this->temp->value = day;
		// поток доставки
		Task<System::Guid>^ thread = gcnew Task<System::Guid>(gcnew Func<Guid>(temp, &Temp::D));
		thread->ContinueWith(gcnew Action<Task<Guid>^>(temp, &Temp::B));
		thread->Start();
		// поток доставки
		fstream File(FILE_BASKET_NAME, ios::out);
		DateTime date1 = DateTime::Today;
		DateTime answer = date1.AddDays(day);
		int day_temp = Convert::ToInt16(date1.Day) + day;
		String^ Str = answer.ToString("m") + " <= дата возврата книг ";
		MessageBox::Show(Str, "Успешно");
		dataGridData->Rows->Clear();
		dataGridData->Columns->Clear();
	}
}

System::Void CurseProject::LibraryForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	MyForm^ form = gcnew MyForm();
	form->Show();
}
void CurseProject::LibraryForm::Headers()
{
	HeaderA();
	HeaderB();
	HeaderC();
	HeaderD();
	HeaderE();
	HeaderF();
}
void CurseProject::LibraryForm::HeaderA_busk()
{
	dataGridData->TopLeftHeaderCell->Value = "###";
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Жанр";
	c1->Width = 100;
	dataGridData->Columns->Add(c1);

	dataGridData->AutoResizeColumn(0);
}
//new
void CurseProject::LibraryForm::HeaderA()
{
	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Список";
	c2->HeaderText = "Жанр";
	c2->Width = 100;
	dataGridData->Columns->Add(c2);

	dataGridData->AutoResizeColumn(0);
}
void CurseProject::LibraryForm::HeaderB()
{
	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Список";
	c2->HeaderText = "Название";
	c2->Width = 150;
	dataGridData->Columns->Add(c2);

	dataGridData->AutoResizeColumn(0);
}
void CurseProject::LibraryForm::HeaderC()
{
	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Список";
	c5->HeaderText = "Год издания";
	c5->Width = 150;
	dataGridData->Columns->Add(c5);

	dataGridData->AutoResizeColumn(0);
}
void CurseProject::LibraryForm::HeaderD()
{
	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Список";
	c3->HeaderText = "Автор";
	c3->Width = 150;
	dataGridData->Columns->Add(c3);

	dataGridData->AutoResizeColumn(0);
}

void CurseProject::LibraryForm::HeaderE()
{
	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Список";
	c4->HeaderText = "Страницы";
	c4->Width = 150;
	dataGridData->Columns->Add(c4);

	dataGridData->AutoResizeColumn(0);
}

System::Void CurseProject::LibraryForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (temp->value == 0) MessageBox::Show("Вы не получали книги", "Упсс...");
	else MessageBox::Show("До даты возврата книг: " + this->temp->value.ToString() + " дней", "Статус");
}

void CurseProject::LibraryForm::ShowRasskaz()	// отображение ввиде таблицы
{
	int temp = 0;
	Rasskaz_ rasskaz;
	Object_ object;
	object.item();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_RASSKAZ);
	std::vector<string> v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = rasskaz.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void CurseProject::LibraryForm::Headers_B()
{
	HeaderA_busk();
	HeaderB();
	HeaderC();
	HeaderD();
	HeaderE();
}
void CurseProject::LibraryForm::HeaderF()
{
	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "Список";
	c6->HeaderText = "Экземпляры";
	c6->Width = 150;
	dataGridData->Columns->Add(c6);

	dataGridData->AutoResizeColumn(0);
}
void CurseProject::LibraryForm::ShowBask()
{
	int temp = 0;
	Basket_ basket;
	std::vector<string> v = basket.GetBK();
	dataGridData->ClearSelection();
	vector<Ones> ones_v = ReturnCell(v, basket.GetBC());
	for (int i = 0; i < basket.GetBC(); i++)
	{
		dataGridData->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1) + ".";
		dataGridData->Columns[0]->HeaderCell->Value = "Корзина";
		dataGridData->Rows[temp]->Cells[NULL]->Value = "##########";
		dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
		dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
		dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
		dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
		dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
		dataGridData->AutoResizeColumn(0);
		dataGridData->AutoResizeRows();
		temp++;
	}
}

void CurseProject::LibraryForm::ShowRoman()
{
	int temp = 0;
	Roman_ roman;
	Object_ object;
	object.item();
	smatch find_world;
	regex regular(SEARCH_ROMAN);
	std::vector<string> v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = roman.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void CurseProject::LibraryForm::ShowPovest()
{
	int temp = 0;
	Povest_ povest;
	povest.Print();
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_POVEST);
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = povest.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void CurseProject::LibraryForm::Show()
{
	Object_ object;
	object.item();
	auto v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = 0; i < object.GetCount(); i++)
	{
		dataGridData->Rows[i]->HeaderCell->Value = "=>";
		dataGridData->Columns[0]->HeaderCell->Value = "id";
		dataGridData->Rows[i]->Cells[NULL]->Value = Convert::ToString(i + 1);
		dataGridData->Rows[i]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
		dataGridData->Rows[i]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
		dataGridData->Rows[i]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
		dataGridData->Rows[i]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
		dataGridData->Rows[i]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
		dataGridData->Rows[i]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
		dataGridData->AutoResizeColumn(0);
		dataGridData->AutoResizeRows();
	}
}
void CurseProject::LibraryForm::ShowStih()
{
	int temp = 0;
	Stih_ stih;
	stih.Print();
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_STIH);
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = stih.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}
void CurseProject::LibraryForm::ShowSkazka()
{
	int temp = 0;
	Skazka_ skazka;
	skazka.Print();
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_SKAZKA);
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = skazka.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}
void CurseProject::LibraryForm::ShowMyth()
{
	int temp = 0;
	Myth_ myth;
	myth.Print();
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_MYTH);
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = myth.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = "=>";
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[NULL]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[En_name::Janr]->Value = Convert_string_To_String(ones_v[i].Janr);
			dataGridData->Rows[temp]->Cells[En_name::Nazvanie]->Value = Convert_string_To_String(ones_v[i].Nazvanie);
			dataGridData->Rows[temp]->Cells[En_name::Year]->Value = Convert_string_To_String(ones_v[i].Year);
			dataGridData->Rows[temp]->Cells[En_name::Author]->Value = Convert_string_To_String(ones_v[i].Author);
			dataGridData->Rows[temp]->Cells[En_name::Pages]->Value = Convert_string_To_String(ones_v[i].Pages) + " стр.";
			dataGridData->Rows[temp]->Cells[En_name::Ekzemps]->Value = Convert_string_To_String(ones_v[i].Ekzemps) + " экз.";
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}