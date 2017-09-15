#include <stdio.h>

void prod_escalar(int m[], int n[]);

int main(){

    int vetorA[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetorB[10] = {1,1,1,1,1,1,1,1,1,1};
    prod_escalar(vetorA,vetorB);

    return 0;
}

void prod_escalar(int m[],int n[]){

    int i, prod = 0;

    for(i = 0; i < 10; i++){
        prod = prod + (m[i] * n[i]);
    }
    printf("\n\n produto escalar e %d \n\n", prod);
}

