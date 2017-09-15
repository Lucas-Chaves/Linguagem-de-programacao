#include <stdio.h>

void print_vet(int veta[],int vetb[]);

 int main(){

    int vetora[5] = {1,2,4,6,21};
    int vetorb[8] = {2,3,6,7,9,11,15,20};
    print_vet(vetora,vetorb);
    return 0;
 }

void print_vet(int veta[],int vetb[]){
    int i,j;
    for(i = 0; i < 5; i++){
     for(j = 0; j < 8; j++){
        if(veta[i] == vetb[j])
            printf("o valor %d existe nos dois vetores. \n", veta[i]);
     }
    }
 }

