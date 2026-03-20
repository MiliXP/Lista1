#include <stdio.h>

int main() {
    int a[10], b[10], uniao[20];
    int k = 0, repetido;

    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < 10; i++) {
        uniao[k++] = a[i];
    }

    for(int i = 0; i < 10; i++) {
        repetido = 0;
        for(int j = 0; j < k; j++) {
            if(b[i] == uniao[j])
                repetido = 1;
        }

        if(!repetido) {
            uniao[k++] = b[i];
        }
    }

    printf("Uniao:\n");
    for(int i = 0; i < k; i++)
        printf("%d ", uniao[i]);

    return 0;
}