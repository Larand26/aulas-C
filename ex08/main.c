#include <stdio.h>

int main(){
    float preco_produto, margem_lucro, preco_final;

    printf("Digite o preço do produto: \n");
    scanf("%f", &preco_produto);
    printf("Digite a margem de lucro: \n");
    scanf("%f", &margem_lucro);

    preco_final = preco_produto * (1 + (margem_lucro / 100));
    printf("O preço fial do seu preoduto será de:%.2f", preco_final);
    return 0;
}