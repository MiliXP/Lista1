#include <stdio.h>

int main() {
    int v[15];
    int tamanho = 15;

    for(int i = 0; i < 15; i++)
        scanf("%d", &v[i]);

    for(int i = 0; i < tamanho; i++) {
        if(v[i] == 0) {
            for(int j = i; j < tamanho - 1; j++) {
                v[j] = v[j + 1];
            }
            tamanho--;
            i--;
        }
    }

    printf("Vetor compactado:\n");
    for(int i = 0; i < tamanho; i++)
        printf("%d ", v[i]);

    return 0;
}