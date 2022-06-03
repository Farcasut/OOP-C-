#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("Lipsesc argumentele");
		return -1;
	}

	char intrare[150];
	char iesire[150];
	printf("Fisier intrare: \n");
	scanf("%149s", &intrare);
	printf("Fisier iesire: \n");
	scanf("%149s", &iesire);
	FILE* fisier_in, * fisier_out;
	printf("%s, %s", intrare, iesire);
	fisier_in = fopen(intrare, "r");
	fisier_out = fopen(iesire, "w+");
	char ch='0';
	while (ch != EOF) 
	{
		ch = fgetc(fisier_in);
		if (strchr("AEIOUaeiou", ch) == 0 && ch!=EOF)
		{
			fputc(ch, fisier_out);
		}
	}

	fclose(fisier_in);
	fclose(fisier_out);
	return 0;
}