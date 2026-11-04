#include <stdio.h>

int main(){
    float kms, lts, media;

    printf("Digite a distancia em kilometros \n");
    scanf("%f", &kms);
    printf("Digite a quantidade de litros \n");
    scanf("%f", &lts);

    if (lts == 0){
        printf("Quantidade de litros inválida");
        return 1;
    }

    media = kms / lts;

    printf("O consumo do carro em km/l é: %.2f", media);
    return 0;
}