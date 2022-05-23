#include "Functions.h"
#include "Classes.h"
#include "LibraryForm.h"
using namespace System;

void SetData()	
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

void ReGroupData()
{
	std::vector<std::string> regroup;
	Object_ obj;
	obj.book();
	regroup = obj.Print();
	ofstream File_New(BOOKS_FILE, ios_base::trunc); 
	if (!File_New.is_open()) throw exception("File read error");
	for (int i = 0; i < regroup.size(); i++) { 
		if (i == regroup.size() - 1) File_New << regroup[i];
		else File_New << regroup[i] << endl;
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

vector<Heads> ReturnCell(vector<string> s, int count)
{
	Heads ones;
	vector <Heads> ones_v;
	regex reg(BITSTRING);
	smatch cat; 
	for (int i = 0; i < count; i++)
	{
		ones_v.push_back(ones);
		int iterator = 0;
		while (regex_search(s[i], cat, reg))
		{
			switch (iterator)
			{
			case 0:
				ones_v[i].Janr = cat.str();
				break;
			case 1:
				ones_v[i].Nazvanie = cat.str();
				break;
			case 2:
				ones_v[i].Year = cat.str();
				break;
			case 3:
				ones_v[i].Author = cat.str();
				break;
			case 4:
				ones_v[i].Pages = cat.str();
				break;
			case 5:
				ones_v[i].Ekzemps = cat.str();
				break;
			default:
				break;
			}
			s[i] = cat.suffix();
			iterator++;
		}
	}
	return ones_v;
}