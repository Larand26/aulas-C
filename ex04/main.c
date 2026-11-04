#include <stdio.h>

int main(){
    int anos, dias;

    printf("Digite a sua iddade em anos: \n");
    scanf("%d", &anos);
    dias = anos * 365;
    printf("Esse é o tando de dias aproximadamente: %d", dias);
    return 0;
}