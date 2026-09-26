#include <stdio.h>

void tornarNegativo(int *arr, int tamanho) {
    for (int i=0; i < tamanho; i++) {
        if (arr[i] > 0)
        {
            arr[i] = -arr[i];
        }
        
    }
}

int main() {
    int numeros[5] = {3, -1, -4, 5};

    tornarNegativo(numeros, 5);

    printf("Números modificados: ");
    for (int i=0; i < 4; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}