#include <stdio.h>
int i;
void primo(int g){
    for(i = 2; i <= g; i++){
        if(g!=i && g%i==0){
            printf("Nao e primo: 0");
            break;
        }
        else if(g==i && g%i == 0){
            printf("E primo: 1");
        }
    }
}
int main(){
    int n;
    printf("Se for 1 é primo 0 nao e primo \n Digite o numero: ");
    scanf("%d", &n);
    primo(n);

    return 0;
}
