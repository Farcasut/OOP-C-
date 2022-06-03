#include <iostream>
#include "Phrase.h"

Phrase::Phrase(const char* fraza)
{
	bool flag=true;
	int cuvantcount = 0;
	words = 0;
	for (int i = 0; fraza[i] != '\0'; i++)
	{	
		if (fraza[i] == ' ')
		{
			
			cuvinte[words][cuvantcount] = '\0';
			if(flag){
			words++;
			cuvantcount = 0;
			flag = false;
			}
		}
		
		if (fraza[i] != ' ')
		{
			flag = true;
			cuvinte[words][cuvantcount] = fraza[i];
			cuvantcount++;
		}

	}
}

Phrase::operator int()

	{
		return (int)words;
	}

const char* Phrase::operator[](int a)
{
	return cuvinte[a];
}

int Phrase::CountLetter(int cuvant, char letter)
{
	

	int apartii=0;
	for (int i = 0; i <= LengthWord(cuvinte[cuvant]); i++)
	{
		if (cuvinte[cuvant][i] == letter)
		{
			apartii++;
		}

	}
	return apartii;
}

int Phrase::LengthWord(const char* cuvant)
{
	int length = 0;
	for (int i = 0; cuvant[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}

int Phrase::CountLetter(char letter)
{
	int sumapr = 0;
	for (int i = 0; i < words; i++)
	{
		sumapr += CountLetter(i, letter);
	}
	return sumapr;
}

const char* Phrase::GetLongestWord()
{
	const char* l = cuvinte[0];
		for (int i = 0; i < words; i++)
		{
			if (LengthWord(l) < LengthWord(cuvinte[i]))
			{
				l=cuvinte[i];
			}
		}
		return l;
}


void Phrase::dispaly()
{
	for (int i = 0; i < words; i++)
	{
		std::cout <<cuvinte[i]<<std::endl;
	}
}
