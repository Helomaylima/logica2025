#include <stdio.h>
#include <string.h>

// Função que converte string para binário e conta bits
int contarbinario(char *num) {
    int contar = 0;
    char binario[4000] = ""; // Array que armazena o binário
    int len = strlen(num);
    int decimal[1010] = {0}; // Array para armazenar número enorme como inteiro

    // Converter string para array
    for (int i = 0; i < len; i++)
        decimal[i] = num[i] - '0'; // Transforma caractere em número

    // Obtem binário
    while (len > 0) {
        int remainder = 0;

        // **Percorre o número grande e divide por 2 
        for (int i = 0; i < len; i++) {
            int atual = decimal[i] + remainder * 10;
            decimal[i] = atual / 2; // Divide por 2
            remainder = atual % 2;  // Guarda o resto (bit binário)
        }

        // Add bit binário ao resultado
        binario[strlen(binario)] = remainder + '0';

        // Remove zeros à esquerda 
        while (len > 0 && decimal[0] == 0) {
            for (int i = 0; i < len - 1; i++)
                decimal[i] = decimal[i + 1]; 
            len--; // Diminui tamanho do número
        }
    }

    // Conta bits 
    for (int i = 0; i < strlen(binario); i++)
        if (binario[i] == '1')
            contar++;

    return contar;
}

int main() {
    int T;
    char num[1010]; // Armazena o número grande

    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        scanf("%s", num); // 
        printf("%d\n", contarbinario(num)); 
    }

    return 0;
}

