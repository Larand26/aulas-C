#include <stdio.h>

int main(){
    int ano_nasc, ano_corrente = 2026, idade;

    printf("Digite o seu ano de nascimento: \n");
    scanf("%d", &ano_nasc);
    idade = ano_corrente - ano_nasc;

    if(idade >= 18){
        printf("já atingiu ou completará a maioridade civil no ano corrente");
    }
    return 0;
}