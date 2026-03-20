#include <stdio.h>

int main() {
    float v[10], somaPos = 0;
    int negativos = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        if(v[i] < 0) negativos++;
        else somaPos += v[i];
    }

    printf("Negativos: %d\n", negativos);
    printf("Soma positivos: %.2f\n", somaPos);

    return 0;
}