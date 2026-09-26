#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += array[i];
    }

    printf("A soma dos números é: %d\n", soma);
    return 0;
}