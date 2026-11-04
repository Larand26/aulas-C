#include <stdio.h>

int main(){
    float salario, gratificacao = 0.05, encargos = 0.07, salario_final;

    printf("Digite o salário do colaborador: \n");
    scanf("%f", &salario);

    salario_final = salario + (salario * gratificacao) - (salario * encargos);
    printf("O seu salário liqudo é igual a: %.2f", salario_final);
    return 0;
}