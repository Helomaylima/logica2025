#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main() {
    int a, b, c; 
    double Ag, Av, Ar, Avf, Agf, R, R2;  
    
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (0 < a && a <= b && b <= c && c <= 1000) {
            Av = sqrt((((a + b + c) / 2.0) * ((b - a + c) / 2.0) * ((a - b + c) / 2.0) * ((a + b - c) / 2.0)));
            R = ((2 * Av) / (a + b + c));
            Ar = M_PI * pow(R, 2);
            Avf = Av - Ar;
            R2 = ((a * b * c) / (4.0 * Av));
            Ag = M_PI * pow(R2, 2);
            Agf = Ag - Av;

            printf("%.4f %.4f %.4f\n", Agf, Avf, Ar);
        } 
        else {
            printf("Digite valores abaixo de 1000 para a, b, c\n");
        }
    }

    return 0;
}
