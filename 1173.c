#include <stdio.h>
 
int main() {
 
    int N[10], V;
    scanf("%d", &V);
    N[0] = V;
    
    printf("N[0] = %d\n", N[0]);
        
        for(int i = 1; i<10; i++){
            
            N[i] = N[i - 1] * 2;
            printf("N[%d] = %d\n", i, N[i]);
            
        }
    
    return 0;
}