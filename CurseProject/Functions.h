#pragma once
#include <iostream>
#include "LibraryForm.h"
using namespace System;
void TransferData();
void ReturnData();
System::String^ Convert_string_To_String(std::string& v);
std::string Stos(System::String^ s);