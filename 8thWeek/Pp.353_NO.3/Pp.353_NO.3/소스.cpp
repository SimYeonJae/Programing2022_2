#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAXSTRLENGTH 15

int main(void)
{
	char str1[15];
	char str2[15];
	char str3[15];
	char str4[15];
	printf("단어 입력 : ");
	scanf_s("%s", str1, 15);
	
	for(int i = 5; i < MAXSTRLENGTH;)
	{ 
		if (strlen(str1) > i)
		{
			strcat_s(str2, "*");
		}
		else if (strlen(str1) == i)
		{
			break;
		}
	}
	strncpy_s(str4, str1, 5); 
	strcpy_s(str3, str4);      
	strcat_s(str3, str2);     

	printf("words entered : %s, \t an omitted word: %s", str1, str3);

			
	}