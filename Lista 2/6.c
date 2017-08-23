#include <stdio.h>

int pote(int e,int p);

int main(){
    int x,y,a;
    printf("Digite o numero:");
    scanf("%d", &x);
    printf("Digite uma potencia: ");
    scanf("%d", &y);

    a = pote(x,y);
    printf("%d elevado a %d = %d", x,y,a);
    return 0;
}
pote(e,p){
    int poten;
    if(p <= 0){
        return 1;
    }else{
        poten = e * pote(e, p - 1);
        return poten;
    }
}
