#include "Classes.h"
#include "Functions.h"
using namespace System;
using namespace System::Threading::Tasks;
Admin::Admin()
{
	ifstream File(FILE_MAIN_NAME);	// ����������� ������ ��������� ������
	if (File.is_open())
	{
		count = 0;
		while (!File.eof()) {
			string temp;	// ��������� ���������� ��������� ����
			getline(File, temp);
			this->admin_data.push_back(temp);
			count++;
		}
	}
	else { System::Windows::Forms::MessageBox::Show("���� ��������", "������"); }
	File.close();
}


std::vector<std::string> Admin::Print_Admin_data()
{
	return admin_data;
}

Basket_::Basket_()
{
	ifstream File(FILE_BASKET_NAME);
	if (!File.is_open()) throw exception("File read error");
	while (!File.eof()) {
		bc++; string temp;	// 
		getline(File, temp);
		this->bk.push_back(temp);
	}
	File.close();
}

vector <string> Basket_::GetBK()
{
	return bk;
}

Builder::Builder()
{
	ifstream File(FILE_NAME);
	if (!File.is_open()) throw exception("File read error");
	while (!File.eof()) {
		id++; string temp;	// 
		getline(File, temp);
		this->data.push_back(temp);
	}
	File.close();
}

void Object_::item()
{
	regex regular(SEARCH_EXP_NEW);	// ���������� ���������
	smatch find_word;
	vector<string>::iterator it = data.begin();// �������� ������
	int i = 0; // ��������� ����������
	count = id;
	while (i < id) {
		if (!regex_match(data[i], find_word, regular)) {// ��������
			data.erase(data.begin() + i);
			id--; i--;									// ����� ��������� 
		}
		i++;
	}
}

void Object_::Basket(int id_)
{
	fstream File(FILE_NAME); fstream File_Basket(FILE_BASKET_NAME, ios_base::app); // �������� ������
	id_--; // �������� ���������� � ����� ������ Object
	Basket_ basket_; auto valueBasket = basket_.GetBK();
	string temp; string buff;// ��������� ����������
	temp = (data[id_].c_str()[data[id_].size() - 1]);
	buff = data[id_];
	int count = stoi(temp); // �������������� �� ��������� ���� � �������������
	if (count == 1) {									// ��������, ���� ����� � ����� ����������,
		buff.replace(buff.size() - 1, buff.size(), "1");// �� ������� ��� �� ������ ������ �������
		if (valueBasket[NULL] == "") {
			File_Basket << buff;
		}
		else
		{
			File_Basket << endl << buff;
		}
		data.erase(data.begin() + id_);
	}
	else {
		buff.replace(buff.size() - 1, buff.size(), "1");
		if (valueBasket[NULL] == "") {
			File_Basket << buff;
		}
		else
		{
			File_Basket << endl << buff;
		} // ������ ������ � ���� "�������"
		count--; string temp2 = to_string(count); // �������������� ������������ �������� � �������� ���
		this->data[id_].replace(data[id_].size() - 1, data[id_].size(), temp2); // ������ � ������� ���������� ������
	}
	File.close(); File_Basket.close(); // �������� ������������ ������
	ofstream File_New(FILE_NAME, ios_base::trunc); // �������� ����� � ������ "������ � �����"
	if (!File_New.is_open()) throw exception("File read error"); // ������ �������� �����
	for (int i = 0; i < data.size(); i++) {  // ������ ������������ �������� � ����� "�������"
		if (i == data.size() - 1) File_New << data[i];
		else File_New << data[i] << endl;
	}
	File_New.close();
}

std::vector<string> Object_::Print()
{
	return data;
}

Povest_::Povest_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_POVEST);	// ���������� ���������
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Povest_Data.push_back(data[i]);
			end = i;
			temp = false;
		}

	}
}

std::vector<std::string> Povest_::Print()
{
	return Povest_Data;
}

Stih_::Stih_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_STIH);	// ���������� ���������
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Stih_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
	}
}

std::vector<std::string> Stih_::Print()
{
	return Stih_Data;
}

Roman_::Roman_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_ROMAN);	// ���������� ���������
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Roman_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
	}
}

std::vector<std::string> Roman_::Print()
{
	return Roman_Data;
}

Rasskaz_::Rasskaz_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_RASSKAZ);	// ���������� ���������
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Rasskaz_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
	}
}

std::vector<std::string> Rasskaz_::Print()
{
	return Rasskaz_Data;
}