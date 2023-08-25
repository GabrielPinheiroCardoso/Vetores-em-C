#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 10

//7) Solicite 10 números ao usuário (não repetidos) e armazene em um vetor. Posteriormente,
//classifique os primeiros 5 elementos em ordem crescente e os 5 elementos posteriores em ordem
//decrescente. Apresente o vetor ao usuário.

int vet[TAM];
int i, x;

void classifica(){
    int aux;

    for (x = 0; x < TAM/2; x++)
    {
        for (i = 0; i < TAM/2-1; i++)
        {
            if (vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
       }
    }
    for (x = 0; x < TAM/2; x++)
    {
        for (i = TAM/2; i < TAM-1; i++)
        {
            if (vet[i]<vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
       }
    }
}
//-------------------------------------------------------------------//
int main(){
    int igual;

    printf("Insira 10 numeros nao repetidos:\n");
    do
    {
       scanf("%d", &vet[i]);
       igual=0;
       for (x = 0; x < i; x++)
        {
            if (vet[x]==vet[i])
            igual=1;
        }
        if (igual==0)
        i++;
    }while (i<TAM);
    
    classifica();

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }
}