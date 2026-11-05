#include <stdio.h>

int main(){
    int n;
    
    do{
        printf("Escolha um número inteiro maior que 1: ");
        scanf("%d", &n);
        if(n < 1){
            printf("Número inválido \n");
        }
    } while (n < 1);

    if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n != 1){
        printf("É primo");
    }else if(n == 2){
        printf("É primo");
    }else if (n == 3){
        printf("É primo");
    }else if (n == 5){
        printf("É primo");
    }else if (n == 7){
        printf("É primo");
    }else{
        printf("Não é primo");
    }

    return 0;
}