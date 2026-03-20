#include <stdio.h>

int main() {
    int v[5], maior, menor, posMaior, posMenor;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);

        if(i == 0) {
            maior = menor = v[i];
            posMaior = posMenor = i;
        } else {
            if(v[i] > maior) {
                maior = v[i];
                posMaior = i;
            }
            if(v[i] < menor) {
                menor = v[i];
                posMenor = i;
            }
        }
    }

    printf("Pos maior: %d\n", posMaior);
    printf("Pos menor: %d\n", posMenor);

    return 0;
}