
#include <iostream>
#include <stdlib.h>
int main()
{
    char arr[17];
    srand(NULL);
    for (int i = 0; i < 16; i++)
    {
        switch (rand() % 2)
        {
        case 0:arr[i] = '0'; break;
        case 1:arr[i] = '1'; break;
        default:break;
        }

    }

    arr[16] = '\0';
    std::cout << arr<<std::endl;
    char ch = arr[0];
    for (int i = 1; i < 16; i++)
    {
        if (arr[i] == '0' && ch == '1')
        {
            arr[i - 1] = '0';
        }
        ch = arr[i];
    }


    std::cout << arr;
    return 0;
}