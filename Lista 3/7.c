#include <stdio.h>


int ordena_vet(int vet[10]);
void imprimir(int vet[10]);

int main(){

    int vetor[10] = {1,2,3,0,4,5,6,0,7,8}, i;

    /*for(i = 0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }*/

    vetor[10] = ordena_vet(vetor);
    imprimir(vetor);

    return 0;
}

int ordena_vet(int vet[10]){
    int i, aux;
    for(i=0; i<10; i++){
        if(vet[i] == 0){
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
        }

    }
    return vet[10];
}
void imprimir(int vet[10]){
    int i;
    for(i=0 ; i<10 ; i++){
        printf("%d \n", vet[i]);
    }
}


