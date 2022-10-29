#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main() {

	srand(time(NULL));

	int arr[MAX];
	int* p = arr;

	for (int i = 0; i < MAX; i++) {
		arr[i] = rand();
	}

	// 내림차순
	for (int i = 0; i < MAX - 1; i++) {
		for (int j = 0; j < MAX - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("내림차순 정렬\n");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("오름차순 정렬\n");

	// 오름차순 
	for (int i = 0; i < MAX - 1; i++) {
		for (int j = 0; j < MAX - 1 - i; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < MAX; i++) {
		printf("%d ", p[i]);
	}


	return 0;

}