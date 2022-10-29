#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 20

void calculate(int* arr, int N) {

	double average;
	double variance = 0;
	double standard;

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	average = (double)sum / N;

	for (int i = 0; i < N; i++) {
		variance = variance + (arr[i] - average) * (arr[i] - average);
	}

	variance = variance / N;

	standard = sqrt(variance);

	printf("평균: %.2lf, 분산: %.2lf, 표준편차: %.2lf\n", average, variance, standard);
}

int main() {

	int arr[MAX] = { 0, };
	srand(time(NULL));

	for (int i = 0; i < MAX; i++) {
		arr[i] = rand();
	}

	calculate(arr, MAX);

	return 0;

}
