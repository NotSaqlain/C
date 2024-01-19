#include <stdio.h>

void fillArray(int v[], int len);
void printArray(int v[], int len);
int  sumArray(int v[], int len);
void min_max(int v[], int *min, int *max, int len);

int main() {

	const int LEN = 10;
	int v[LEN];
	int min, max;

	fillArray(v, LEN);
	printf("SUM: %d\n", sumArray(v, LEN));
	min = max = v[0];
	min_max(v, &min, &max, LEN);

	printf("MIN: %d\n", min);
	printf("MAX: %d\n", max);
	printArray(v, LEN);

	return 0;
}

void fillArray(int v[], int len) {
	for (int i = 0; i < len; i++) {
		printf("Scrivi il v[%d]: ", i+1);
		scanf("%d", &v[i]);
	}
}

int  sumArray(int v[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += v[i];
	}
	return sum;
}

void min_max(int v[], int *min, int *max, int len) {
	for (int i = 0; i < len; i++) {
		if (v[i] < *min) {
			*min = v[i];
		}
		if (v[i] > *max) {
			*max = v[i];
		}
	}
}

void printArray(int v[], int len) {
	for (int i = 0; i < len; i++) {
		printf("[%d: %d] ", i, v[i]);
	}
}
