#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 23

//3) Gere aleatoriamente um vetor contendo 23 elementos numéricos, classifique-os em ordem
//decrescente e posteriormente apresente ao usuário.

int main(){
int vet[TAM];
int i, x, aux;

srand(time(NULL));

for (i = 0; i < TAM; i++)
{
    vet[i]=rand();
}
for (i = 0; i < TAM; i++)
{
    printf("%d ",vet[i]);
}
for (x = 0; x < TAM; x++)
{
    for (i = 0; i < TAM-1; i++)
    {
        if (vet[i]>vet[i+1])
        {
        aux=vet[i];
        vet[i]=vet[i+1];
        vet[i+1]=aux;
        }
    }
}
printf("\nNova ordem do vetor:\n");
for (i = 0; i < TAM; i++)
{
    printf("%d ",vet[i]);
}
}