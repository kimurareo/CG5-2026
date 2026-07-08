#pragma once

#include <string>

// string型をwstring型に変換する関数
std::wstring ConvertString(const std::string& str);

// wstring型をstring型に変換する関数
std::string ConvertString(const std::wstring& str);

