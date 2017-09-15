#include <stdio.h>

int busca(int vet[], int x);

int main(){

    int busc;
    int vetor[10] = {2,5,4,54,43,22,5,9,30,15};
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &busc);
    busca(vetor, busc);

    return 0;
}


int busca(int vet[], int x){
    int i;
    for(i = 0; i < 10; i++){
        if(vet[i] == x)
            printf("se encontra na posicao %d \n", x, i);

    }




}
