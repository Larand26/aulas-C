#include <stdio.h>

int main(){
    int n, expoente, total = 1;

    printf("Digite a sua base:");
    scanf("%d", &n);
    do{
        printf("Digite um expoente: ");
        scanf("%d", &expoente);
        if (expoente < 0){
            printf("Escolha um expoente positivo \n");
        }
    } while (expoente < 0);

    for (int i = 0; i < expoente; i++){
        total *= n;
    }

    printf("%d", total);
}