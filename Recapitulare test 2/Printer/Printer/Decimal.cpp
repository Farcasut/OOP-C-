#include "Decimal.h"
#include "sstream"
string Decimal::GetFormatName()
{
	return "Decimal";
}

string Decimal::FormatNumber(int number)
{
	string s;
	std::ostringstream ss;
	ss << dec << number;
	string result = ss.str();
	return result;
}
