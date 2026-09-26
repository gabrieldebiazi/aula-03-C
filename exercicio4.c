#include <stdio.h>

void trocarValores(int *numA, int *numB) {
    int aux = *numA;
    *numA = *numB;
    *numB = aux;
}

int main() {
    int numA = 10;
    int numB = 20;

    printf("%d\n%d\n", numA, numB);
    printf("-------------\n");

    trocarValores(&numA, &numB);

    printf("%d\n%d\n", numA, numB);
}