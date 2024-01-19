#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int v[], int len);
void printArray(int v[], int len);
void changeOrder(int v[], int len);


int main() {
    srand(time(NULL));

    const int LEN = 100;
    int v[LEN];

    fillArray(v, LEN);
    printArray(v, LEN);
    changeOrder(v, LEN);
    printArray(v, LEN);

    return 0;
}

void fillArray(int v[], int len) {
	for (int i = 0; i < len; i++) {
        v[i] = rand() % 10 + 1;
    }
}

void changeOrder(int v[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void printArray(int v[], int len) {
	for (int i = 0; i < len; i++) {
		printf("[%d: %d] ", i, v[i]);
	}
    printf("\n");
}