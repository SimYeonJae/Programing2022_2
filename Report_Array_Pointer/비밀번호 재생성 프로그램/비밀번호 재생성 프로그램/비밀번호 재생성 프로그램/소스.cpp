#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20
#include <string.h>

int passwordCheck(char* password, char* input) {

	if (strcmp(password, input) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	char password[MAX] = "1234";
	char input[MAX] = "";

	while (1) {
		printf("PassWord: ");
		scanf("%s", input);
		if (strlen(input) >= 20) {
			printf("Password Length Error!\n");
			printf("retry..\n");
			continue;
		}

		if (passwordCheck(password, input)) {
			printf("normal termination..\n");
			break;
		}
		else {
			printf("not matched, retry..\n");
			continue;
		}

	}

	return 0;
}
