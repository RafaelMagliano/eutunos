# include <stdio.h>

int main() {
    int numero, soma = 0;
    printf("digite um numero: ");

    scanf("%d", &numero);
    printf(" Antecessores ate 0:\n");
        for (int i = numero - 1; i >= 0; i--) {;
            printf("%d\n", i);
            soma += i;

        }
    printf("soma dos antecessores: %d\n", soma);
    return 0;
}


