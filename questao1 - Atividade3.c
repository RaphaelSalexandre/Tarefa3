#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, result;

    printf("Escreva a quantidade: ");
    scanf("%d", &n);

    printf("Escreva valor de X: ");
    scanf("%f", &x);

    for(i = 1; i <= n; i++) {
        result = pow(x, i);
        printf("%.2f\n", result);
    }

    return 0;
}
