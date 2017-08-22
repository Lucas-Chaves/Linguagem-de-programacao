#include <stdio.h>






int main( int argc, const char* argv[] ){

    int x,cont = 0,i=0;
        printf("Digite o Valor a ser usado para os naturais: ");
        scanf("%d",&x);

        while(x != cont){
            if(i%2 != 0){
                printf("%d \n", i);
                cont ++;
            }
            i++;
        }
}
