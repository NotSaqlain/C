#include <stdio.h>

int main() {
    
    int matrice[10][10];
    
    puts("TAVOLA PITAGORICA\n\n");
    
    
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            matrice[i][j ] = i * j;
            printf("%2d ", matrice[i][j]); 
            //printf("matrice[%d][%d]", i, j);
        }
        printf("\n");
    }

    

    return 0;
}