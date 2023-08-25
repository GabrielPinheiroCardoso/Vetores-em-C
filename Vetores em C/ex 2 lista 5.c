#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM_NOME 50
#define MAX_NOME 10

//2) Ler um vetor com 10 nomes, classifique-os em ordem crescente e posteriormente apresente a nova
//ordem ao usuário;

int main(){
char nomes[MAX_NOME][TAM_NOME], temp[TAM_NOME];
int i, j;

printf("Insira 10 nomes:\n");
setbuf(stdin,0);
for (i = 0; i < MAX_NOME; i++)
{
   fgets(nomes[i],TAM_NOME,stdin);
}
printf("//--------------------------------------------------//\n");
printf("\nOrdem atual do vetor:\n");
for (i = 0; i < MAX_NOME; i++)
{
    printf("%s\n", nomes[i]);
}
printf("//-------------------------------------------------//\n");
for (i = 0; i < MAX_NOME-1; i++) {
        for (j = 0; j < MAX_NOME-i-1; j++) {
            if (strcmp(nomes[j], nomes[j+1]) > 0) {
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], temp);
            }
        }
    }
printf("Nova ordem do vetor:\n");
for (i = 0; i < MAX_NOME; i++)
{
    printf("%s\n", nomes[i]);
}
}