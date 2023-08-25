#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 100

//5) Gerar randomicamente um vetor contendo 100 elementos numéricos entre 1 e 300 (não repetidos).
//Classifique-o em ordem crescente e posteriormente, solicite ao usuário um valor (entre 1 e 300) e
//efetue uma busca no vetor. No final, apresente o índice ao qual o valor foi localizado ou a
//mensagem “Valor não encontrado”.

int vet[TAM];
int i, x;

void preenche(){
    int igual;
    srand(time(NULL));

    do
    {
       vet[i]=1+rand()%300;
       igual=0;
       for (x = 0; x < i; x++)
        {
            if (vet[x]==vet[i])
            igual=1;
        }
        if (igual==0)
        i++;
    }while (i<TAM);
}
//--------------------------------------------------//
void classifica(){
    int aux;

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
}
//--------------------------------------------------//
int buscar(int valor){
    for (i = 0; i < TAM; i++) {
        if (vet[i] == valor) {
            return i;
        }
    }
    return -1;
}
//--------------------------------------------------//
int main(){
    int num;

    preenche();
    classifica();
    do
    {
        printf("Isira um numero para a procura (1-300): ");
        scanf("%d", &num);
    } while (num<0 || num>300); 
    if (buscar(num) == -1) {
        printf("Valor nao encontrado\n");
    } else {
        printf("Valor encontrado no indice %d\n", buscar(num));
    }
    printf("/------------------------------------------------------------------------------------/\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;   
}