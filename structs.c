#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int matricula;
    char nome[50];
    float altura;
    char sexo;
} tAluno;

int main()
{
    int i, qtde;

    printf("Quantos alunos? ");
    scanf("%d", &qtde);

    tAluno vAluno[qtde];

    for(i=0; i<qtde; i++){
            fflush(stdin);
        printf("Digite o nome: ");
        gets(vAluno[i].nome);
        printf("Matricula: ");
        scanf("%d", &vAluno[i].matricula);
        printf("Altura: ");
        scanf("%f", &vAluno[i].altura);

        fflush(stdin);
        printf("Sexo: ");
        scanf("%c", &vAluno[i].sexo);
        printf("\n");
    }
    for(i=0; i<qtde; i++){
        printf("Nome: %s, Matricula: %d, Altura: %.2f, Sexo: %c\n", vAluno[i].nome, vAluno[i].matricula, vAluno[i].altura, vAluno[i].sexo);
    }
}
