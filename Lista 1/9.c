#include <stdio.h>



int main( int argc, const char* argv[] ){
    int cont,sel,num1,num2,x;

    do{
        printf("Qual operacao voce deseja: \n <1> Divisao \n <2> resto da divisao \n <3> adicao \n <4> multiplicacao:  \n");
        scanf("%d", &sel);

        printf("Digite o 1 numero:");
        scanf("%d", &num1);
        printf("Digite o 2 numero:");
        scanf("%d", &num2);

        switch(sel){
      case 1 :
         x = num1/num2;
         printf("Divisao: %d \n", x);
         break;
      case 2 :
         x = num1%num2;
         printf("Resto da Divisao: %d \n", x);
         break;
      case 3 :
         x = num1+num2;
         printf("soma: %d \n", x);
         break;
      case 4 :
         x = num1*num2;
         printf("Multiplicacao: %d \n", x);
         break;
      default :
         printf("entrada invalida... \n" );

      }
        printf("1 para continuar ou 2 para parar: ");
        scanf("%d", &cont);
    }while(cont == 1);
}
