#include <stdio.h>

int n,total,i;
void divisor(int div);

int main(){
    printf("Digite o numero: ");
    scanf("%d", &n);
    divisor(n);
    return 0;
}

void divisor(div){
    for(i = 1; i <= div; i++){
        if(div%i == 0){
            total += 1;
        }
    }
    printf("%d tem %d divisores.", div,total);
}
