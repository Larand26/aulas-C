#include <stdio.h>

int main(){
    int a, b;

    printf("Escolha número A: ");
    scanf("%d", &a);
    printf("Escolha número B: ");
    scanf("%d", &b);

    if(a > b){
        printf("Intervalo inválido");
        return 1;
    }
    
    for (int i = a; i < b; i++){
        if(i == 2){
            printf("%d\n", i);
        }else if (i == 3){
            printf("%d\n", i);
        }else if (i == 5){
            printf("%d\n", i);
        }else if (i == 7){
            printf("%d\n", i);
        }
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i != 1){
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}