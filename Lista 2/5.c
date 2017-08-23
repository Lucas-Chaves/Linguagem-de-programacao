
#include <stdio.h>

int fato(int f);

int main(){
    int fat,f;
    printf("Digite o numero para o fatorial: ");
    scanf("%d", &fat);

    f = fato(fat);
    printf("Fatorial de %d = %d",fat,f);

    return 0;
}
int fato(f){
    int vfat;
    if(f <= 1){
        return (1);
    }else{
        vfat = f * fato(f - 1);
        return(vfat);
    }
}
