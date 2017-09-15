#include <stdio.h>

int vet[8], a;
int popula_vet(int vetor[8]);
void exibe_vetor (int vetor[8]);
int main(){

    popula_vet(vet);
    exibe_vetor(vet);
    return 0;
}


popula_vet (int vetor[8]){
     int i;
     for (i=0 ; i < 8; i++){
         printf("valor do vetor %d: ", i+1);
         scanf("%d", &vetor[i]);
     }
     return vetor[8];
}

void exibe_vetor (int vetor[8]){
     int i;
     for (i= 4; i < 8; i++)
     printf("Elemento %d = %d\n", i+1, vetor[i]);
     for (i = 0; i < 4; i++)
     printf("Elemento %d = %d\n", i+1, vetor[i]);
}