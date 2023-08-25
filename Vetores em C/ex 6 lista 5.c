#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
#define TAM 30

//6) Solicite o nome, idade e sexo de 5 pessoas. Classifique o nome em ordem crescente e
//posteriormente apresente todos os dados ao usu�rio.
struct FICHA_ALUNO
{
    char nome[TAM];
    int idade;
    char sexo;
};

int i, j;
void ordena(struct FICHA_ALUNO ALUNO[]){
    for (i = 0; i < MAX; i++)
    {
        for (j = i+1; j < MAX; j++)
        {
          if (strcmp(ALUNO[i].nome,ALUNO[j].nome)>0)
            {
                struct FICHA_ALUNO AUX = ALUNO[i];
                ALUNO[i] = ALUNO[j];
                ALUNO[j] = AUX;
            }   
        } 
    }
}
int main(){

    struct FICHA_ALUNO ALUNO[MAX];

    for (i = 0; i < 5; i++){
        printf("Digite o nome da %dª pessoa: ", i+1);
        setbuf(stdin,0);
        fgets(ALUNO[i].nome,30,stdin);

        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &ALUNO[i].idade);

        printf("Digite o sexo da %dª pessoa (M/F): ", i+1);
        scanf(" %c", &ALUNO[i].sexo);
    }
    ordena(ALUNO);
    printf("\nDados das pessoas em ordem alfab�tica:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s | Idade: %d | Sexo: %c\n", ALUNO[i].nome, ALUNO[i].idade, ALUNO[i].sexo);
    }
}
