#include <stdio.h>
 
int main() {
    int T, N;
    long long int fib[61];
    
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    scanf("%d", &T);
            
    for(int i = 0; i < T; i++){        
            scanf("%d", &N);
            printf("Fib(%d) = %lld\n", N, fib[N]);
            
        }
    
    return 0;
}