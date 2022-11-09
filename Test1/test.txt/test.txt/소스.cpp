#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	char str[] = "C:/Document/Github/Test1/test.txt";
	char* pStrFilePath = str;
	char* pStrSplitFilePath[2000] = { NULL, };
	char str2[] = "test2";

	char* ptrsplit = strtok(str, "/");
	int nCounter = 0;
	while (ptrsplit != NULL)
	{
		pStrSplitFilePath[nCounter] = ptrsplit;
		nCounter++;
		ptrsplit = strtok(NULL, "/");

	}

	for (int i = 0; i < nCounter; i++)
	{
		printf("%d, %s\n", i, pStrSplitFilePath[i]);

	}
	printf("\n\nㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n");
	pStrSplitFilePath[3] = { str2 };


	for (int i = 0; i < nCounter; i++)
	{
		printf("%d, %s\n", i, pStrSplitFilePath[i]);
	}
}
