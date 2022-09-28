#include <stdio.h>

#define MINCHESTSIZE	90
#define MAXCHESTSIZE	100

int main(void)
{
	int nChestsize = 0;
	char chChestsize;

	printf("Input your chest size;\n");
	scanf_s("%d", &nChestsize);

		if (nChestsize <= MINCHESTSIZE)
		{
			chChestsize = 'S';
		}
		else if ((nChestsize > MINCHESTSIZE)&&(nChestsize <= MAXCHESTSIZE))
		{
			chChestsize = 'M';
		}
		else
		{
			chChestsize = 'L';
		}

		printf("Your Chest Size: %c\n", chChestsize);

		return 0;
}

