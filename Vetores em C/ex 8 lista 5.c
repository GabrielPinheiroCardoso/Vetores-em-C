#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 10

//8) Aleatoriamente, preencha uma matriz 10x10 com valores entre 20 e 200. Posteriormente,
//classifique a matriz em ordem crescente (na mesma ordem da entrada) e apresente ao usuário. Obs.
//Pode-se criar outras estruturas de vetores e/ou matriz se julgar necessário.

int matriz[TAM][TAM];
int i, j;

void ordena(){
    int i, j, k;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            for (k = j+1; k < TAM; k++) {
                if (matriz[i][j] > matriz[i][k]) {
                    troca(&matriz[i][j], &matriz[i][k]);
                }
            }
        }
    }
}

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j] = 20 + rand() % 181 ;
        }
    }
    ordena();
    printf("Matriz ordenada:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}