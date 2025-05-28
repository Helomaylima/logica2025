#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1001

void primeira_passagem(char *str) {
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            str[i] += 3;
        }
    }
}

void segunda_passagem(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void terceira_passagem(char *str) {
    int len = strlen(str);
    for (int i = len / 2; i < len; i++) {
        str[i] -= 1;
    }
}

int main() {
    int N;
    char linha[MAX];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        fgets(linha, MAX, stdin);

        linha[strcspn(linha, "\n")] = '\0';

        primeira_passagem(linha);
        segunda_passagem(linha);
        terceira_passagem(linha);

        printf("%s\n", linha);
    }

    return 0;
}