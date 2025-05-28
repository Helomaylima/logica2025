#include <stdio.h>
#include <string.h>

#define MAX 51

void decodificar(char *str, int deslocamento) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = ((str[i] - 'A' - deslocamento + 26) % 26) + 'A';
    }
}

int main() {
    int N;
    char texto[MAX];
    int deslocamento;

    scanf("%d", &N);
    getchar(); 

    for (int i = 0; i < N; i++) {
        fgets(texto, MAX, stdin);
        texto[strcspn(texto, "\n")] = '\0';
        scanf("%d", &deslocamento);
        getchar();

        decodificar(texto, deslocamento);
        printf("%s\n", texto);
    }

    return 0;
}