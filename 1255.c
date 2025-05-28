#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 201

void encontrar_frequentes(char *linha) {
    int freq[26] = {0}; 
    int i, max = 0;

    for (i = 0; linha[i]; i++) {
        if (isalpha(linha[i])) {
            char c = tolower(linha[i]);
            freq[c - 'a']++;
            if (freq[c - 'a'] > max)
                max = freq[c - 'a'];
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] == max)
            printf("%c", i + 'a');
    }
    printf("\n");
}

int main() {
    int N;
    char linha[MAX];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        fgets(linha, MAX, stdin);
        linha[strcspn(linha, "\n")] = '\0'; 
        encontrar_frequentes(linha);
    }

    return 0;
}