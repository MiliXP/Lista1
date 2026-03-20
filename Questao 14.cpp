#include <stdio.h>

int main() {
    int v[6];
    int somaPares = 0, qtdImpares = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    printf("Numeros pares:\n");
    for(int i = 0; i < 6; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
            somaPares += v[i];
        }
    }

    printf("\nSoma dos pares: %d\n", somaPares);

    printf("Numeros impares:\n");
    for(int i = 0; i < 6; i++) {
        if(v[i] % 2 != 0) {
            printf("%d ", v[i]);
            qtdImpares++;
        }
    }

    printf("\nQuantidade de impares: %d\n", qtdImpares);

    return 0;
}