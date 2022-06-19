#include <iostream>
#include <conio.h>
#include <stdio.h>
#include  <windows.h>
using namespace std;
int main()
{
    // Color of the console
    HANDLE console_color;
    console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);

    cout << "New Game\n" << "Credits\n";
    while(1)
	switch (_getch())
    {
    case 'w':
	    {
		    system("CLS");
    		SetConsoleTextAttribute(
			console_color, 14);
            cout << "New Game\n";
            SetConsoleTextAttribute(console_color, 15);
    		cout<< "->Credits\n"; break;
            SetConsoleTextAttribute(
                console_color, 14);
	    }
    case 's':
        system("CLS");
        SetConsoleTextAttribute(
            console_color, 15);
        cout << "->New Game\n";
        SetConsoleTextAttribute(console_color, 14);
        cout << "Credits\n"; break;
        SetConsoleTextAttribute(
            console_color, 15);
    	break;
        default:
            break;
    }


    // Print different colors from 1
    // to 50 on the output screen

    return 0;
}