#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>       
int main()
{
	srand(time(NULL));
	FILE* fp=fopen("format_alk.txt", "w+");
	fprintf(fp, "%s", "vector |-> [ ");

	for (int i = 0; i < 3; i++)
	{
		int Number = rand() % 1000000;
		fprintf(fp, " %d,", Number);
		
	}

	fprintf(fp, "%s", " ]");
	fclose(fp);
}

