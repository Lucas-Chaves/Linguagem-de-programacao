#include <stdio.h>

int main( int argc, const char* argv[] ){
 
    int x,i,nat = 0;
        printf("Digite o Valor a ser usado para os naturais: ");
        scanf("%d",&x);
        for(i = 1; i <= x; i++)
            nat = nat + i;
        printf("Resultado: %d \n", nat);
}
