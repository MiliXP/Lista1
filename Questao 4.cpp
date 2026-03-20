#include <stdio.h>

int main() {
    int v[8], x, y;

    for(int i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &x, &y);

    printf("Soma = %d\n", v[x] + v[y]);

    return 0;
}