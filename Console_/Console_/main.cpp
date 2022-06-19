#include <iostream>
#include <conio.h>
#include "Console.h"

using namespace std;
int Board_X = 40;
int Board_Y = 20;

int main()
{

	Console* cons = Console::CreateConsoleChanger();
	

	int i = 1;
	int x = 1;
	int y = 1;
	//cons->GameBoard(Board_X, Board_Y);
	cout << "0";
	while(1)
	{
		
		cons->ChangeColorText(i % 15 + 1);
		switch (_getch())
		{
		case 'a':
			if(x==1)
			{
				break;
			}
			else
			{
				system("CLS");
				//cons->GameBoard(Board_X, Board_Y);
				cons->SetCoords(--x, y);
				cout << "0";
			}
			break;
		case 'd':
			if (x >=Board_X-1)
			{
				break;
			}
			else
			{
				system("CLS");
				//cons->GameBoard(Board_X, Board_Y);
				cons->SetCoords(++x, y);
				cout << "0";
			}
			break;
		case 'w':
			if (y == 1)
			{
				break;
			}
			else
			{
				system("CLS");
				//cons->GameBoard(Board_X, Board_Y);
				cons->SetCoords(x, --y);
				cout << "0";
			}
			break;
		case 's':
			if (y >= Board_Y-2)
			{
				break;
			}
			else
			{
				system("CLS");
				//cons->GameBoard(Board_X, Board_Y);
				cons->SetCoords(x, ++y);
				
				cout << "0";
			}
			break;
		}
		Sleep(10);
		i++;
	}
	
	

}