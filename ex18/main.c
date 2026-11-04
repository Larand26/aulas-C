#include <stdio.h>

int main(){
    int a, b;

    printf("Escolha número A: ");
    scanf("%d", a);
    printf("Escolha número B: ");
    scanf("%d", b);

    if(a > b){
        printf("Intervalo inválido");
        return 1;
    }
    
    for (int i = a; i < b; i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
            printf("%d", i);
        }
    }
    
    return 0;
}