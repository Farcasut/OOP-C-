#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <initializer_list>
#include <stdarg.h>
#include <stdio.h>      /
#include <stdlib.h>     
#include <time.h>       

Sort::Sort(int n, int min, int max)
{
	if (n <= 100)
	{
		srand(time(NULL));
	this->count = n;
	this->ConstructorType = "MIN_MAX";
	for (int i = 0; i < count; i++)
	{
		int random_value = rand() % (max - min) + min;
		v[i] = random_value;
	}
	}
	else {
		printf("Numarul de elemente este prea mare");
	}
}

Sort::Sort(std::initializer_list<int> list)
{
	int count = 0;
	for (auto x : list)
	{
		v[count] = x;
		count++;
	}
	this->count = count;
	this->ConstructorType = "Lista de initializare";
}

Sort::Sort(int vec[], int n)
{
	count = n;
	for (int i = 0; i < n; i++)
	{
		v[i] = vec[i];
	}

}


Sort::Sort(int n, ...)
{
	this->ConstructorType = "...method";
	this->count = n;
	va_list L;
	va_start(L, n);
	for (int i = 0; i < n; i++)
	{
		v[i] = va_arg(L, int);

	}
	va_end(L);
}



Sort::Sort(const char* lista)
{	
	char* s = new char[strlen(lista) + 1];
	strcpy(s, lista);
	s[strlen(lista) + 1] = '\0';
	int cnt = 1;
	char* token;
	token = strtok(s, ",");
	v[0]=atoi(token);
	while (token != NULL)
	{
		token = strtok(NULL, ",");
		if (token != NULL)
		{
			v[cnt] = atoi(token);
			cnt++;
		}
	}
	count = cnt;
}

void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < count; i++)
	{
 		int j = i - 1;
		int temp = v[i];
		while (j >= 0 && v[j] > temp)
		{
			v[j + 1] = v[j];
			j = j - 1;
		}
		
			v[j + 1] = temp;
	}

}

void Sort::BubbleSort(bool ascendent)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
		if(ascendent==1)
			if (v[j] > v[j + 1])
				std::swap(v[j], v[j + 1]);
		if(ascendent==0)
			if (v[j] < v[j + 1])
				std::swap(v[j], v[j + 1]);
		}
	}

}

void Sort::Print()
{
	for (int i = 0; i < this->count; i++)
	{
		
		printf("%d ", v[i]);
	}
	printf("\n");
}

int Sort::GetElementsCount()
{
	return this->count;
}

int Sort::GetElementFromIndex(int index)
{
	return v[index];
}
