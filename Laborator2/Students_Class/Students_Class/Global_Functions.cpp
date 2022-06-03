#include "Global_Functions.h"

void Guide_() {

	printf("If the first student has a bigger grade the functions will return 1 \n if the second has a bigger grade will return -1 \n else will return 0");
}
int Compare_Math(Students nr1, Students nr2) {

	if (nr1.Get_Math() > nr2.Get_Math())
	{
		return 1;
	}
	else if (nr1.Get_Math() == nr2.Get_Math())
	{
		return 0;
	}
	else {
		return -1;
	}

}
int Compare_English(Students nr1, Students nr2)
{

	if (nr1.Get_English() > nr2.Get_English())
	{
		return 1;
	}
	else if (nr1.Get_English() == nr2.Get_English())
	{
		return 0;
	}
	else {
		return -1;
	}
}
int Compare_History(Students nr1, Students nr2)
{

	if (nr1.Get_History() > nr2.Get_History())
	{
		return 1;
	}
	else if (nr1.Get_History() == nr2.Get_History())
	{
		return 0;
	}
	else {
		return -1;
	}
}

int Compare_Avrage(Students nr1, Students nr2)

{

	if (nr1.Get_Avrage() > nr2.Get_Avrage())
	{
		return 1;
	}
	else if (nr1.Get_Avrage() == nr2.Get_Avrage())
	{
		return 0;
	}
	else {
		return -1;
	}
}