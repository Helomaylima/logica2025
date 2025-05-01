#include <stdio.h>

int main() {
    
    int N;  
    scanf("%d", &N); 
    
    if(N > 0 && N < 1000000){

        // 100
        int b = N % 100;
        int bval = N / 100;
    
        // 50
        int c = b % 50;
        int cval = b / 50;
    
        // 20
        int d = c % 20;
        int dval = c / 20;
    
        // 10
        int e = d % 10;
        int eval = d / 10;
    
        // 5
        int f = e % 5;
        int fval = e / 5;
    
        // 2
        int g = f % 2;
        int gval = f / 2;
    
        // 1
        int h = g % 1;
        int hval = g / 1;
        
        printf("%d\n", N);
        
        printf("%d nota(s) de R$ 100,00\n", bval);
        printf("%d nota(s) de R$ 50,00\n", cval);
        printf("%d nota(s) de R$ 20,00\n", dval);
        printf("%d nota(s) de R$ 10,00\n", eval);
        printf("%d nota(s) de R$ 5,00\n", fval);
        printf("%d nota(s) de R$ 2,00\n", gval);
        printf("%d nota(s) de R$ 1,00\n", hval);
    }
    else {
        printf("Presentation Error");
    }
    return 0;
}
