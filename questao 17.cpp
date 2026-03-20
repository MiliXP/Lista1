#include <stdio.h>

int main() {
    int a[5], y[5];
    int soma[5], produto[5];
    int diferenca[5], inter[5], uniao[10];
    int kDif = 0, kInter = 0, kUniao = 0;
    int existe;

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < 5; i++)
        scanf("%d", &y[i]);

    // Soma e Produto
    for(int i = 0; i < 5; i++) {
        soma[i] = a[i] + y[i];
        produto[i] = a[i] * y[i];
    }

    // Diferença (elementos de a que não estão em y)
    for(int i = 0; i < 5; i++) {
        existe = 0;
        for(int j = 0; j < 5; j++) {
            if(a[i] == y[j])
                existe = 1;
        }
        if(!existe)
            diferenca[kDif++] = a[i];
    }

    // Interseção
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(a[i] == y[j])
                inter[kInter++] = a[i];
        }
    }

    // União
    for(int i = 0; i < 5; i++)
        uniao[kUniao++] = a[i];

    for(int i = 0; i < 5; i++) {
        existe = 0;
        for(int j = 0; j < 5; j++) {
            if(y[i] == a[j])
                existe = 1;
        }
        if(!existe)
            uniao[kUniao++] = y[i];
    }

    printf("Soma:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", soma[i]);

    printf("\nProduto:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", produto[i]);

    printf("\nDiferenca:\n");
    for(int i = 0; i < kDif; i++)
        printf("%d ", diferenca[i]);

    printf("\nIntersecao:\n");
    for(int i = 0; i < kInter; i++)
        printf("%d ", inter[i]);

    printf("\nUniao:\n");
    for(int i = 0; i < kUniao; i++)
        printf("%d ", uniao[i]);

    return 0;
}