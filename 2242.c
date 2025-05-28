#include <stdio.h>
#include <string.h>

int eh_vogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char risada[51], vogais[51];
    int i, j = 0;

    scanf("%s", risada);

    for (i = 0; risada[i]; i++) {
        if (eh_vogal(risada[i])) {
            vogais[j++] = risada[i];
        }
    }
    vogais[j] = '\0';

    int esquerda = 0;
    int direita = j - 1;
    int palindromo = 1;

    while (esquerda < direita) {
        if (vogais[esquerda] != vogais[direita]) {
            palindromo = 0;
            break;
        }
        esquerda++;
        direita--;
    }

    if (palindromo){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;

   
}