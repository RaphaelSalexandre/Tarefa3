#include <stdio.h>

int main() {
    int i, j, result;

    for(i = 1; i <= 10; i++) {
        printf("Tabuada de %d:\n", i);

        for(j = 1; j <= 10; j++) {
            result = i * j;
            printf("%d x %d = %d\n", i, j, result);
        }

        printf("\n");
    }

    return 0;
}
