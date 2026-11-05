#include <stdio.h>

void mostrar_cardapio(){
    printf("==============================\n");
    printf("1 -       Sopa       - R$20,00\n");
    printf("2 -      Salada      - R$15,00\n");
    printf("3 -  Prato Principal - R$30,00\n");
    printf("4 -     Sobremesa    - R$10,00\n");
    printf("5 -       Bebida      - R$8,00\n");
    printf("==============================\n");
    printf("  0 para finalizar o pedido   \n");
}

float calcula_preco(int item, int quantidade){
    switch (item)
    {
    case 1:
        return quantidade * 20;
    case 2:
        return quantidade * 15;
    case 3:
        return quantidade * 30;
    case 4:
        return quantidade * 10;
    case 5:
        return quantidade * 8;
    default:
        return 0;
    }
}

int main(){
    float total = 0.0;
    int item, quantidade = 0;

    do{
        mostrar_cardapio();
        scanf("%d", &item);
        if (item != 0){
            printf("Insira a quantidade: ");
            scanf("%d", &quantidade);
        }
        total += calcula_preco(item, quantidade);
        printf("Total do pedido até o momento R$%.2f \n\n", total);
    } while (item != 0);

    printf("Total - R$%.2f", total);
    return 0;
}