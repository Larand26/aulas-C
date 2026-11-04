#include <stdio.h>

int main(){
    float valor, valor_com_desconto, desconto = 0.12;

    printf("Digite o valor original do produto: \n");
    scanf("%f", &valor);

    valor_com_desconto = valor - valor * desconto;
    printf("Este é o valor do seu pedido com o desconto: %.2f", valor_com_desconto);
    return 0;
}