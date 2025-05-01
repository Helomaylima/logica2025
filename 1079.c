#include <stdio.h>

int main() {
    int N, i;
    float v1, v2, v3, mediap;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%f %f %f", &v1, &v2, &v3);
        mediap = ((v1 * 2) + (v2 * 3) + (v3 * 5)) / 10;
        printf("%.1f\n", mediap);
    }

    return 0;
}
