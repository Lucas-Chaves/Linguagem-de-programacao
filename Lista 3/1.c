#include <stdio.h>

int vet[100], a;
int popula_vet(int vetor[100]);
void exibe_vetor (int vetor[100]);
int main(){

    printf("Digite a quantidade de valores: ");
    scanf("%d", &a);
    popula_vet(vet);
    exibe_vetor(vet);



    return 0;
}


popula_vet (int vetor[100]){
     int num,i;
     for (i=0 ; i<a; i++){
         printf("valor do vetor %d: ", i+1);
         scanf("%d", &vetor[i]);
     }
     return vetor[100];
}

void exibe_vetor (int vetor[10]){
     int i;
     for (i=(a-1); i >= 0; i--)
     printf("Elemento %d = %d\n", i+1, vetor[i]);
}

