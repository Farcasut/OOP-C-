#pragma once

class Phrase {
	char cuvinte[100][100];
	int words;
public:
	Phrase(const char* fraza);
	operator int();
	const char* operator [](int a);
	int CountLetter(int cuvant,  char letter);
	int LengthWord(const char*);
	int CountLetter(char letter);
	const char* GetLongestWord();
	int vowelcount();
	void dispaly();
};