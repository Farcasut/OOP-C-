#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int main()
{	

	FILE* inFile;
	inFile = fopen("textin.txt", "r");
	char buffer[200];
	char pattern[20]="aba";
	printf("The pattern\n");
	scanf("%s", &pattern);

	int i = 1;
	int no_of_matches = 0;
	bool flag_n = true;
	bool flag_v=false;
	bool flag_c = false;
	while (fgets(buffer, 200, inFile))
	{
		int j=0;
		bool match = false;
		for (int i = 0; i < strlen(buffer); i++)
		{
			for ( j= 0; j < strlen(pattern); j++)
			{
				if (pattern[j] != buffer[j + i])
				{
					break;
				}
			

			}
		}
	
		if (j == (strlen(pattern)-1) && flag_v == false && flag_c == false)
		{
			if (flag_n == 1)
			{
				printf("%d:%s", (i++), buffer);
			}
			else
				printf("%s\n", buffer);
			
		}
		else { no_of_matches++; }
		if(j != (strlen(pattern)-1) && flag_v==true&& flag_c == false)
		{
			if (flag_n == 1)
			{
				printf("%d:%s", (i++), buffer);
			}
			else
				printf("%s\n", buffer);
		}
		
	}


	if (flag_c == true)
		printf("%d", no_of_matches);

	fclose(inFile);
	return 0;

}