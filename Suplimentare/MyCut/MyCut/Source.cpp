#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	FILE* inFile;
	inFile = fopen("textin.txt", "r");
	printf("Parameters: -b -f -d\n");
	int tem1, tem2, tem3;
	bool flag_b = false;
	bool flag_f = false;
	bool flag_d = false;
	char line[200];
	char f[200];
	scanf("%d %d %d", &tem1, &tem2, &tem3);
	flag_b=tem1;
	flag_d=tem3;
	flag_f=tem2;
	int no_of_bytes=0;
	if (flag_d == 1 && flag_f == 1 )
	{	int field=1;
		char ch='0';
		printf("field si delimitator  \n");
		scanf("%d %c", &field, &ch);
		while (fgets(line, 200, inFile))
		{

			int count = 1;
			for (int i = 0, j=0; i < strlen(line); i++)
			{
				if (ch == line[i] && count!=field)
				{
					count++;
				}
				if (count == field)
				{
					f[j + 1] = '\0';
					if (line[i + 1] == ch)
					{
						if (flag_b == 1)
						{
							no_of_bytes = strlen(line);
						}
						break;
					}
					
					f[j++] = line[i+1];
				
				}
			}
			printf("%s\n", f);
		}
	}
	printf("%d", no_of_bytes);
	return 0;
}