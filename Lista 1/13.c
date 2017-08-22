#include <stdio.h>
#include <math.h>





int main( int argc, const char* argv[] ){

    int x,y,pot;
	
	printf("Digite o Valor a ser usado para os naturais: ");
        scanf("%d",&x);
        printf("Digite um numero nao-negativo: ");
        scanf("%d", &y);
        pot = pow(x,y);
       	printf("O valor de %d elevado a %d: %d", x,y,pot);
}
