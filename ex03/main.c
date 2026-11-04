#include <stdio.h>

int main(){
    float valor_da_hora, total;
    int horas_trabalhadas;

    printf("Digite o valor da sua hora: \n");
    scanf("%f", &valor_da_hora);
    printf("Digite a quantidade de horas trabalhadas: \n");
    scanf("%d", &horas_trabalhadas);

    total = valor_da_hora * horas_trabalhadas;
    printf("O valor do seu salário setá de: %.2f", total);
    return 0;
}