#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 4



int main() {

	srand(time(NULL));

	int arr1[N][M];
	int arr2[M][N];
	int result[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr1[i][j] = rand();
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			arr2[i][j] = rand();
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result[i][j] = 0;
			for (int k = 0; k < M; k++) {
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	printf("무작위 행렬의 곱은: \n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%10d  ", result[i][j]);
		}
		printf("\n");
	}


	return 0;

}
