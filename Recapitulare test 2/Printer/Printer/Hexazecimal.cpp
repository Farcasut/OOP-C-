#include "Hexazecimal.h"
#include <iomanip>
string Hexazecimal::GetFormatName()
{
    return "Hexazecimal";
}

string Hexazecimal::FormatNumber(int number)
{
	
	std::ostringstream ss;
	ss << "0x" << setfill('0' ) << std::setw(8) << hex << number;
	
	string result = ss.str();
	string::iterator it = result.begin();
	for(;it!=result.end();it++)
	{
		*it = toupper(*it);
	}
	return result;
}
