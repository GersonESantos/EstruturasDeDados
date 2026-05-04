#include <stdio.h>

void imprime(const int v[4]) {
    int i, j;
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3; j++) {
            if (i == j)
                printf("%d ", v[i]);
            else
                printf("%d ", 0);
        }
        printf("\n"); /* quebra a linha para ficar legivel */
    }
}

int main(void) {
    int vetor[4] = {1, 2, 3, 4};
    imprime(vetor);
    return 0;
}
