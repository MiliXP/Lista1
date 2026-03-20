#include <stdio.h>

int main() {
    int v[10];
    int i = 0, j, repetido;

    while(i < 10) {
        scanf("%d", &v[i]);

        repetido = 0;
        for(j = 0; j < i; j++) {
            if(v[i] == v[j]) {
                repetido = 1;
                break;
            }
        }

        if(repetido) {
            printf("Numero repetido! Digite outro.\n");
        } else {
            i++;
        }
    }

    printf("Vetor final:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", v[i]);

    return 0;
}