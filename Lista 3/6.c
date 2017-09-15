#include <stdio.h>

float popula_vet(float vet[],int qvolta);
void corrida(float vet[],int voltas);


int main(){

    int qvolta;

    printf("quantas voltas o piloto vai fazer: ");
    scanf("%d", &qvolta);
    float volta[qvolta];
    volta[qvolta] = popula_vet(volta,qvolta);

    corrida(volta,qvolta);

}


float popula_vet(float vet[], int qvolta){
    int j;
    for(j = 0; j < qvolta; j++){
        printf("Digite o valor da %d volta:  ", j+1);
        scanf("%f", &vet[j]);
    }
    return vet[qvolta];
}

void corrida(float vet[],int voltas){
    int i;
    int volta = 1;
    float btempo = vet[0], media = vet[0];;
    for(i = 1; i < voltas; i++){
        media = media + vet[i];
        if(vet[i] <= btempo){
            btempo = vet[i];
            volta  = i+1;
        }
    }
    printf("A sua melhor volta foi a %d com o tempo %.2f com media de %.2f ", volta,btempo,(media/voltas));
}



