#include <stdio.h>

int main( int argc, const char* argv[] ){
    int x = 1,quad;

    while(x != 0){
        printf("Digite o Valor a ser elevado ao quadrado: ");
        scanf("%d",&x);

        quad = x*x;
        printf("Resultado: %d \n", quad);
    }
}
