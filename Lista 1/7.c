#include <stdio.h>

int main(){
    int fat = 1;
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    for(int c = 1; c <= x; c++){
      fat *= c;
    }
    printf("%d", fat);
}
