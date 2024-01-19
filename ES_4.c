#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int v[10];
    int somma = 0;

    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10 + 1;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    for (int i = 0; i < 10; i++) {
        somma += v[i];
    }

    printf("\nSOMMA: %d\n", somma);
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}