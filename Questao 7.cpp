#include <stdio.h>

int main() {
    int v[10], maior, pos;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(i == 0 || v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao: %d\n", pos);

    return 0;
}