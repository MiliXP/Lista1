//Questao 1
#include <stdio.h>

int main() {
    int list[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = list[0] + list[1] + list[5];
    printf("Soma = %d\n", soma);

    list[4] = 100;

    for(int i = 0; i < 6; i++) {
        printf("%d\n", list[i]);
    }

    return 0;
}