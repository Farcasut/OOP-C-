#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

void frontiera_(const char* pattern)
{
    int* frontiera = new int[strlen(pattern)];
    frontiera[0] = -1;
    frontiera[1] = 0;

    int k = 0;
    for (int i = 2; i < strlen(pattern); i++)
    {
        while (k >= 0 && pattern[k] != pattern[i - 1])
        {
            k = frontiera[k];
        }
        k++;
        frontiera[i] = k;

    }
    for (int i = 0; i < strlen(pattern); i++)
        cout << frontiera[i] << " ";
}

int main()

{

    char* pattern = new char[32];
    strcpy(pattern, "0001" /*"xyxxyxxyxyxyyxyyxyyxyxyyxyy"*/);
    frontiera_(pattern);
    return 0;
}