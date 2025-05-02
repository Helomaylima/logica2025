#include <stdio.h>
#include <math.h>

int main() {
    int N, x, y, i;
    double rafael, beto, carlos;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %d", &x, &y);

        if(x >= 1 && y <= 100){ 
            rafael = (pow(3*x, 2)) + (pow(y, 2));
            beto = 2 * (pow(x, 2)) + (pow(5*y, 2));
            carlos = -100 * x + (pow(y, 3));

            if(beto > carlos && beto > rafael) {
                printf("Beto ganhou\n");
            } else if(carlos > beto && carlos > rafael) {
                printf("Carlos ganhou\n");
            } else {
                printf("Rafael ganhou\n");
            }
        }
    }
}

