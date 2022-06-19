#pragma once
#include <iostream>
#include <windows.h>

enum Colors
{
	/*black,*/ blue, green, aqua, red, purple, yellow, white, grey, light_blue, light_green, /*light_aqua,*/ light_red, light_purple, light_yellow, bright_white
};
class Console
{
	HANDLE console;
	Console()
	{
		console= GetStdHandle(STD_OUTPUT_HANDLE);
	}
public:

	void ChangeColorText(int ColorID)
	{
		
		SetConsoleTextAttribute(console, ColorID);

	}
	void SetCoords(short x, short y)
	{
		COORD newPosition = { x, y };
		SetConsoleCursorPosition(console, newPosition);
	}

	void GameBoard(short x, short y)
	{

	
		SetConsoleTextAttribute(console, 3);
		for (short i = 0; i < x; i++)
		{
			SetConsoleCursorPosition(console, { i, 0 });
			std::cout << 'þ';
			SetConsoleCursorPosition(console, { i, short(y-1) });
			std::cout << 'þ';
		}

		for(short i=0; i<y;i++)
		{
			SetConsoleCursorPosition(console, { 0, i });
			std::cout << 'Û';
			SetConsoleCursorPosition(console, { x, i });
			std::cout << 'Û';
		}

	}

	static Console* CreateConsoleChanger()
	{

		Console* temp = new Console();
		return temp;
	}
};
