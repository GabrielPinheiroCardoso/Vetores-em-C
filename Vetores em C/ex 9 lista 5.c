#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

//9) Solicite os dados de uma turma de 20 alunos (nome da disciplina, nome, idade, sexo, nota1, nota2,
//sub). Calcule a média e armazene a situação “Aprovado” ou “Reprovado” em um vetor.
//Finalmente, apresente o nome da disciplina e todos os dados (em ordem de nome). Apresente
//também a quantidade de pessoas do sexo feminino que foram aprovadas e o percentual de homens
//da sala.

typedef struct {
    char disciplina[30];
    char nome[50];
    int idade;
    char sexo;
    float nota1, nota2, sub;
    char situacao[10];
} Aluno;

void situacao(Aluno *aluno) {
    float media = (aluno->nota1 + aluno->nota2 + aluno->sub) / 3.0;
    if (media >= 7.0) {
        strcpy(aluno->situacao, "Aprovado");
    } else {
        strcpy(aluno->situacao, "Reprovado");
    }
}

int main() {
    Aluno turma[MAX];
    int i;
    int naprovados = 0, Faprovadas = 0;
    float numh=0;

    for (i = 0; i < MAX; i++) {
        printf("Dados do aluno %d:\n", i+1);
        printf("Disciplina: ");
        fgets(turma[i].disciplina, 30, stdin);
        printf("Nome: ");
        fgets(turma[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &turma[i].idade);
        printf("Sexo (M ou F): ");
        scanf(" %c", &turma[i].sexo);
        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);
        printf("Substitutiva: ");
        scanf("%f", &turma[i].sub);
        getchar(); 

        situacao(&turma[i]);

        if (strcmp(turma[i].situacao, "Aprovado") == 0) {
            naprovados++;
            if (turma[i].sexo == 'F') {
                Faprovadas++;
            }
        }
        if (turma[i].sexo=='M')
        {
            numh++;
        }
        
        printf("\n");
    }

    printf("Disciplina: %s", turma[0].disciplina);
    printf("Dados da turma:\n");
    printf("Nome\tIdade\tSexo\tNota 1\tNota 2\tSub\tSituação\n");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < MAX; i++) {
        printf("%s\t%d\t%c\t%.1f\t%.1f\t%.1f\t%s\n",
        turma[i].nome, turma[i].idade, turma[i].sexo,
        turma[i].nota1, turma[i].nota2, turma[i].sub, turma[i].situacao);
    }
    printf("--------------------------------------------------------------\n");


    printf("Porcentagem de homens na sala: %f",numh*100/20);
    printf("Número de pessoas do sexo feminino aprovadas: %d.", &Faprovadas);
}