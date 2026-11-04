#include <stdio.h>

int main(){
    float total = 0, valor = 0;

    do{
      printf("Digite o valor do Item ou 0 para sair: ");
      scanf("%f", &valor);
      total += valor;
      printf("Total da compra: %.2f \n", total);
    } while (valor != 0);

    if(total > 100){
        printf("Desconto aplicado no valor de %.2f \n", total * 10 / 100);
        total = total - (total * 10 / 100);
    }

    printf("O total da sua compra foi de: %.2f", total);
    
    return 0;
}