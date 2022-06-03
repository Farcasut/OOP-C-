#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<string.h>
#include <algorithm>    
void init(char a[20][20]) {
	for (int i = 0; i < 20; i++)
		for(int j=0; j<20; j++)
			a[i][j] = '\0';
}
int main() {
/*	char my_str[128];
	fgets(my_str, 128, stdin);
	char words[20][20];
	init(words);
	int i = 0;
	int cntwords=0;
	int j=0;
	while (my_str[i] != '\0') 
	{
		if (my_str[i] != ' ') {
			words[cntwords][j] = my_str[i];
			j++;
		}
		else 
		{
			words[cntwords][j] = '\0';
			j = 0;
			cntwords++;

		}
		i++;
	}
	std::cout << strlen(words[1]);
	printf("%s\n", words[0]);*/


	char my_str[128];
	
	std::cin.get(my_str, 128);

	char* cuv = strtok(my_str, " ");
	char *cuvinte[128];
	int numar_cuvinte = 0;
	while (cuv != NULL) {
		cuvinte[numar_cuvinte] = cuv;
		numar_cuvinte++;
		cuv = strtok(NULL, " ");
	}
	int i, j;
	for (i = 0; i <numar_cuvinte; i++)
		for (j = 0; j < numar_cuvinte - 1; j++)
		{
			if (strlen(cuvinte[j]) == strlen(cuvinte[j + 1]))
			{
				int a = (int)cuvinte[j];
				int b = (int)cuvinte[j + 1];
				if (a > b)
				{
					char* temp = cuvinte[j];
					cuvinte[j] = cuvinte[j + 1];
					cuvinte[j + 1] = temp;
				}
			}

			if (strlen(cuvinte[j]) < strlen(cuvinte[j + 1]))
			{
				char* temp = cuvinte[j];
				cuvinte[j] = cuvinte[j + 1];
				cuvinte[j + 1] = temp;


			}
		}

	for (int i = 0; i < numar_cuvinte; i++)
		printf("%s\n", cuvinte[i]);
	return 0;
}