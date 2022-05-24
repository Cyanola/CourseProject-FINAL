#include "Functions.h"
#include "Classes.h"
#include "LibraryForm.h"
using namespace System;

void TransferData()	
{
	ifstream File_Default(MAIN_BOOKS);
	vector<string> temp_data; string temp;
	if (!File_Default.is_open()) throw exception("File read error");
	while (!File_Default.eof()) {
		getline(File_Default, temp);
		temp_data.push_back(temp);
	}
	File_Default.close();
	ofstream File_Data(BOOKS_FILE, ios_base::trunc);
	if (!File_Data.is_open()) throw exception("File read error");
	for (int i = 0; i < temp_data.size(); i++) {
		if (i == temp_data.size() - 1) File_Data << temp_data[i];
		else File_Data << temp_data[i] << endl;
	}

	File_Data.close();
}

void ReturnData()
{
	std::vector<std::string> ret;
	Work_ work;
	work.book();
	ret = work.Print();
	ofstream File_New(BOOKS_FILE, ios_base::trunc); 
	if (!File_New.is_open()) throw exception("File read error");
	for (int i = 0; i < ret.size(); i++) { 
		if (i == ret.size() - 1) File_New << ret[i];
		else File_New << ret[i] << endl;
	}
}

std::string Stos(System::String^ s)
{
	using namespace System::Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	std::string os(chars);
	return os;
}

System::String^ Convert_string_To_String(std::string& os)
{
	System::String^ s;
	s = gcnew System::String(os.c_str());
	return s;
}

vector<Heads> DivideRow(vector<string> s, int count)
{
	Heads heads;
	vector <Heads> heads_v;
	regex reg(BITSTRING);
	smatch sm; 
	for (int i = 0; i < count; i++)
	{
		heads_v.push_back(heads);
		int iter = 0;
		while (regex_search(s[i], sm, reg))
		{
			switch (iter)
			{
			case 0:
				heads_v[i].Janr = sm.str();
				break;
			case 1:
				heads_v[i].Nazvanie = sm.str();
				break;
			case 2:
				heads_v[i].Year = sm.str();
				break;
			case 3:
				heads_v[i].Author = sm.str();
				break;
			case 4:
				heads_v[i].Pages = sm.str();
				break;
			case 5:
				heads_v[i].Ekzemps = sm.str();
				break;
			default:
				break;
			}
			s[i] = sm.suffix();
			iter++;
		}
	}
	return heads_v;
}