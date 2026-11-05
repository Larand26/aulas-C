#include <stdio.h>

int main(){
    int quantidade_negativo = 0, n;

    for (int i = 0; i < 10; i++){
        printf("Digite um número (%d de 10)", i + 1);
        scanf("%d", &n);
        if(n < 0){
            quantidade_negativo++;
        }
    }
    
    printf("Dos 10 números escolhidos %d são negativos", quantidade_negativo);

    return 0;
}