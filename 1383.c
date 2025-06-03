#include <stdio.h>

int verificarSudoku(int matriz[9][9]) {
    int i, j, k;

    for (i = 0; i < 9; i++) {
        int freq[10] = {0};
        for (j = 0; j < 9; j++) {
            int val = matriz[i][j];
            if (val < 1 || val > 9 || freq[val]++) return 0;
        }
    }

    for (j = 0; j < 9; j++) {
        int freq[10] = {0};
        for (i = 0; i < 9; i++) {
            int val = matriz[i][j];
            if (val < 1 || val > 9 || freq[val]++) return 0;
        }
    }

    for (int lin = 0; lin < 9; lin += 3) {
        for (int col = 0; col < 9; col += 3) {
            int freq[10] = {0};
            for (i = lin; i < lin + 3; i++) {
                for (j = col; j < col + 3; j++) {
                    int val = matriz[i][j];
                    if (val < 1 || val > 9 || freq[val]++) return 0;
                }
            }
        }
    }

    return 1;  // Sudoku válido
}

int main() {
    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {
        int matriz[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", instancia);
        if (verificarSudoku(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}