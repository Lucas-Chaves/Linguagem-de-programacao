#include <stdio.h>

int par(int n);
int main(){
   int x;
   printf("Digite um numero --> (1)- Se For par e (2)- Se for impar: ");
   scanf("%d", &x);
   x = par(x);
   printf("\n \n %d \n \n", x);

}
int par(n){
    if(n%2 == 0)
        return 1;
    else
        return 0;
}
