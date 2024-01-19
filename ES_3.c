#include <stdio.h>

int isVocali(char frase[], int len);
void contrario(char frase[], char frase_[], int len);
int main() {

    char frase[100];
    char frase_c[100];
    printf("Scrivi una frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("FRASE: %s", frase);

    int nv = isVocali(frase, 100);
    printf("numero vocali = %d;\n", nv);

    contrario(frase, frase_c, 100);
    printf("%s", frase_c);

    return 0;
}

int isVocali(char frase[], int len) {
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    int nv = 0;
    for (int i = 0; i < len; i++) {
        for (int k = 0; k < 5; k++) {
            if (frase[i] == v[k]) {
                nv++;
            }
        }
    }
    return nv;
}

void contrario(char frase[], char frase_c[], int len) {
    for (int i = 0; i < len; i++) {
        frase_c[i] = frase[len - i - 1];
    }
}