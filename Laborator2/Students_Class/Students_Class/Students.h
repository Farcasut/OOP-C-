#pragma once
#include  <string>

class Students
{
private:
	std::string Name;
	int Math;
	int English;
	int History;
public:
	Students(std::string name="", int math = 0, int english = 0, int history = 0);
	void Set_Math(int nota)  ;
	void Set_English(int nota) ;
	void Set_History(int nota);
	void Set_Name(std::string name) ;
	std::string Get_Name();
	int Get_Math() ;
	int Get_English() ;
	int Get_History() ;
	double Get_Avrage();
};