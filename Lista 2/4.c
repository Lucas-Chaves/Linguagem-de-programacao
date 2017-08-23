#include <stdio.h>

int l1,l2,l3;
void triangulo(int l01, int l02, int l03);

int main(){
    printf("Digite os lados do triangulo: \n");
    scanf("%d %d %d", &l1,&l2,&l3);
    triangulo(l1,l2,l3);

    return 0;
}
void triangulo(l01,l02,l03){
    if(l01 == l02 && l02 == l03){
        printf("Triangulo Equilatero");
    }else if(l01 == l02 || l02 == l03 || l01 == l03){
        printf("Triangulo Isosceles");
    }else if(l01 != l02 && l02 != l03 && l01 != l03){
        printf("Triangulo Escaleno");
    }
}
