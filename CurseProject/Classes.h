#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <regex>
#include <algorithm>
#include <ctime>
using namespace std;
#define FILE_FAVOURITES_NAME "Favourites.txt"		//
#define BOOKS_FILE "Data.txt"				// Имена Файлов
#define MAIN_BOOKS "DefaultData.txt"

#define SEARCH_EXP_NEW R"(\w{2,17}\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" //Общее регулярное выражение
#define SEARCH_POVEST R"((Povest)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Повести
#define SEARCH_ROMAN R"((Roman)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Романы
#define SEARCH_RASSKAZ R"((Rasskaz)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Рассказы
#define SEARCH_STIH R"((Stihotvorenie)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Стихотворения
#define SEARCH_PIESA R"((Piesa)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Мифы
#define SEARCH_SKAZKA R"((Skazka)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для группы Сказки
#define BITSTRING R"((\w{2,30}\s)|(\w{3,15})|(\d{2,4})|(\d{1}))" //Регулярное выражения для разбиения строки на подстроки

enum En_name
{
	Janr = 1,
	Nazvanie = 2,
	Year = 3,
	Author = 4,
	Pages = 5,
	Ekzemps = 6,
};

struct Ones
{
	string Janr = "";
	string Nazvanie = "";
	string Year = "";
	string Author = "";
	string Pages = "";
	string Ekzemps = "";
};

class Librarian
{
public:
	Librarian();
	vector<string> Print_Lib_data();
	string GetPassword() { return Password; };
	int GetCount() { return count; }
private:
	const string Password = "OOP1337";
	vector <string> librarian_data;
	int count = 0;
};
class Builder
{
public:
	void virtual book() = 0;
	std::vector<std::string> virtual Print() = 0;
	Builder();
protected:
	vector<string> data;
	int id = 0;
};

class Favourites_
{
public:
	Favourites_();
	vector <string> GetFV();
	int GetFW() { return fw; }
private:
	int fw = 0; // favourites count
	vector <string> fv; // favourites ko
};
class Object_ : public Builder
{
public:
	void book() override;
	void Favourites(int id_);
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> basket_;
	int count = 1;
	int begin;
	int end;
};
class Povest_ : public Object_
{
public:
	Povest_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Povest_Data;
	int count = 0;
	int begin = 0;
	int end = 0;
};
class Stih_ : public Object_
{
public:
	Stih_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Stih_Data;
	int count = 0;
};
class Roman_ : public Object_
{
public:
	Roman_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Roman_Data;
	int count = 0;
};
class Rasskaz_ : public Object_
{
public:
	Rasskaz_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Rasskaz_Data;
	int count = 0;
};
class Skazka_ : public Object_
{
public:
	Skazka_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Skazka_Data;
	int count = 0;
};
class Piesa_ : public Object_
{
public:
	Piesa_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Piesa_Data;
	int count = 0;
};
std::vector<Ones> ReturnCell(std::vector<std::string> s, int count);