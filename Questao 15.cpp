#include <stdio.h>

int main() {
    int a[10], b[10], inter[10];
    int k = 0, repetido;

    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(a[i] == b[j]) {

                repetido = 0;
                for(int x = 0; x < k; x++) {
                    if(inter[x] == a[i])
                        repetido = 1;
                }

                if(!repetido) {
                    inter[k] = a[i];
                    k++;
                }
            }
        }
    }

    printf("Intersecao:\n");
    for(int i = 0; i < k; i++)
        printf("%d ", inter[i]);

    return 0;
}