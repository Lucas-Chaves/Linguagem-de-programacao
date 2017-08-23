#include <stdio.h>

int multi,x,y;
void ler();
int mult(int n3,int n4);
void imprimir();

int main(){
    ler();
    return 0;
}

void ler(){
    printf("Digite dois numeros para multiplicar: ");
    scanf("%d %d", &x,&y);
    imprimir();
}

mult(n3,n4){
    return n3 * n4;
}

void imprimir(){
    multi = mult(x,y);
    printf("%d X %d = %d", x,y,multi);
}
