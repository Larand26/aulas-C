#include <stdio.h>

int main(){
    int n;

    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n < 0){
            printf("Escolha um número positivo \n");
        }
        
    } while (n < 0);
    
    printf("====================\n");
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", n, i, n * i);
    }
    
}