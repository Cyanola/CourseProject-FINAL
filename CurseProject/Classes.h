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
#define FILE_BASKET_NAME "Basket.txt"		//
#define FILE_NAME "Data.txt"				// Имена Файлов
#define FILE_MAIN_NAME "DefaultData.txt"
#define SEARCH_EXP_NEW R"(\w{2,30}\s\w{2,10}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" //Общее регулярное выражение
#define SEARCH_POVEST R"((Повесть)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для повестей
#define SEARCH_STIH R"((Стихотворение)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для стихотворений
#define SEARCH_ROMAN R"((Роман)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для романов
#define SEARCH_RASSKAZ R"((Рассказ)\s\w{2,30}\s\d{4}\s\w{3,15}\s\d{2,4}\s\d{1})" // Регулярное выражение для рассказов
#define BITSTRING R"((\w{2,35}\s)|(\d{1})|(\d{2,15}))"
#define SPACE R"(^\s)"

enum En_name
{
	Nazvanie = 1,
	Year = 2,
	Author = 3,
	Pages = 4,
	Ekzemps = 5,
};

struct Ones
{
	string Nazvanie = "";
	string Year = "";
	string Author = "";
	string Pages  = "";
	string Ekzemps = "";
};

class Admin
{
public:
	Admin();
	vector<string> Print_Admin_data();
	string GetPassword() { return Password; };
	int GetCount() { return count; }
private:
	const string Password = "OOP1337";
	vector <string> admin_data;
	int count = 0;
};
class Builder
{
public:
	void virtual item() = 0;
	std::vector<std::string> virtual Print() = 0;
	Builder();
protected:
	vector<string> data;
	int id = 0;
};

class Basket_
{
public:
	Basket_();
	vector <string> GetBK();
	int GetBC() { return bc; }
private:
	int bc = 0; // basket count
	vector <string> bk; // basket ko
};
class Object_ : public Builder
{
public:
	void item() override;
	void Basket(int id_);
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
std::vector<Ones> ReturnCell(std::vector<std::string> s, int count);