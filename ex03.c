#include <stdio.h>

int main()
{
    float soma = 0, media;
    float nota[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a nota do aluno %d: ", i +1);
        scanf("%f", &nota[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("A nota do aluno %d e: %.2f\n", i + 1, nota[i]);
        soma = soma + nota[i];
    }
    media = soma/5;
    printf("A media da turma e: %.2f\n", media);

return 0;
}



