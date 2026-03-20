#include <stdio.h>

int main() {
    int v[10], pares[10], impares[10];
    int kPar = 0, kImpar = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0) {
            pares[kPar++] = v[i];
        } else {
            impares[kImpar++] = v[i];
        }
    }

    printf("Array pares:\n");
    for(int i = 0; i < kPar; i++)
        printf("%d ", pares[i]);

    printf("\nArray impares:\n");
    for(int i = 0; i < kImpar; i++)
        printf("%d ", impares[i]);

    return 0;
}