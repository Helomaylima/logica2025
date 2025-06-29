#include <stdio.h>

int calls;

int fibonacci(int n) {
    if (n == 0) {
        calls++;
        return 0;
    }
    if (n == 1) {
        calls++;
        return 1;
    }

    calls++; 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N, x;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        calls = -1; 
        int result = fibonacci(x);
        printf("fib(%d) = %d calls = %d\n", x, calls, result);
    }

    return 0;
}
