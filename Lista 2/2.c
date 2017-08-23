#include <stdio.h>
int i,cont = 1,n,soma,pr = 2;
void primo(int g);

int main(){
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    primo(n);
    return 0;
}

void primo(g){
    while(g >= cont){
        for(i = 2; i <= pr; i++){
            if(pr!=i && pr%i==0){
                pr++;
                break;
            }
            else if(pr==i && pr%i == 0){
                printf("%d + ", pr);
                soma = soma + pr;
                cont ++;
                pr++;
                break;
            }
        }
    }
    printf(" = %d", soma);
}
