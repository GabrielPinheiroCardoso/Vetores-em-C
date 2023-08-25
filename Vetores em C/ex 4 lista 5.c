#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 20

//4) Gerar randomicamente um vetor (V1) contendo 20 elementos entre 10 e 100. Posteriormente, gere
//um segundo vetor (V2) contendo os dados classificados crescente de V1 e apresente os dois
//vetores lado a lado ao usuário.

int main(){
int vet[TAM], vet2[TAM];
int i, x, aux;

srand(time(NULL));

for (i = 0; i < TAM; i++)
{
    vet[i]=10+rand()%90;
}
printf("VETOR PREENCHIDO:\n");
for (i = 0; i < TAM; i++)
{
    printf("%d ",vet[i]);
}
//--------------------------------------------------//
for (i = 0; i < TAM; i++)
{
    vet2[i]=vet[i];
}
//--------------------------------------------------//

for (x = 0; x < TAM; x++)
{
    for (i = 0; i < TAM-1; i++)
    {
        if (vet2[i]>vet2[i+1])
        {
        aux=vet2[i];
        vet2[i]=vet2[i+1];
        vet2[i+1]=aux;
        }
    }
}
//--------------------------------------------------//

printf("\nVETOR ORDENADO:\n");
for (i = 0; i < TAM; i++)
{
    printf("%d ",vet2[i]);
}
} 