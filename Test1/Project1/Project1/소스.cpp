#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

#define MAXSTRLENGTH 80

int main(void)
{
	char str[MAXSTRLENGTH];
	strcpy_s(str, MAXSTRLENGTH, "wine");
	strcat_s(str, MAXSTRLENGTH, "apple");
	printf("%s, %d\n", str, (int)(strlen(str)));

	strncpy_s(str, "pine", 1);

	printf("%s, %d\n", str, (int)(strlen(str)));
	return 0;
}
