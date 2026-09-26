#include <stdio.h>

int main() {
    char saudacao[] = "Ola galera";
    int tamanho = sizeof(saudacao) / sizeof(saudacao[0]);
    int soma = 0;

    for (int i=0; i < tamanho; i++) {
        if (saudacao[i] ==  'a') {
            soma += 1;
        }
    }

    printf("A letra 'a' (minusculo) aparece %d vezes.\n", soma);
    return 0;
}