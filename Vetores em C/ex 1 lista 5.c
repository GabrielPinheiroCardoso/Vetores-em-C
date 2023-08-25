#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 10

//1) Leia um vetor de 10 elementos numéricos, classificá-los em ordem crescente e posteriormente
//apresente a nova ordem ao usuário;

int main(){
int vet[TAM];
int i, aux, x;

printf("Insira 10 numeros inteiros:\n");
for (i = 0; i < TAM; i++)
{
    scanf("%d", &vet[i]);
}
//--------------------------------------------------//
printf("Ordem atual do vetor:\n");
for (i = 0; i < TAM; i++)
{
    printf("%d ", vet[i]);
}
//--------------------------------------------------//
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
//--------------------------------------------------//
printf("\n\nNova ordem do vetor:\n");
for (i = 0; i < TAM; i++)
{
    printf("%d ", vet[i]);
}

}