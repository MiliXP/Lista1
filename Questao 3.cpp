#include <stdio.h>

int main() {
    float v[10], quadrado[10];

    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        quadrado[i] = v[i] * v[i];
    }

    printf("Valores originais:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\nQuadrados:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", quadrado[i]);
    }

    return 0;
}