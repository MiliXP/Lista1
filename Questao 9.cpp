#include <stdio.h>

int main() {
    int v[6];

    for(int i = 0; i < 6; i++) {
        do {
            scanf("%d", &v[i]);
        } while(v[i] % 2 != 0);
    }

    for(int i = 5; i >= 0; i--) {
        printf("%d\n", v[i]);
    }

    return 0;
}