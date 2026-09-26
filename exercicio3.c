#include <stdio.h>

int main() {
    int pontuacao = 100;
    int *ponteiro = &pontuacao;

    printf("%d\n", *ponteiro);

    *ponteiro = 20;
    printf("%d\n", *ponteiro);
}