#include <stdio.h>

int main(){
    int n, total = 0;

    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n < 0){
            printf("Escolha um número positivo \n");
        }
        
    } while (n < 0);

    for (int i = 1; i <= n; i++){
        total += i;
    }

    printf("A soma de todos de 1 até %d é: %d", n, total);
    
}