#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if(n2 == 0){
        printf("Divisão por Zero inpossível");
        return 1;
    }

    if(n1 % n2 == 0){
        printf("Número divisível");
    }else{
        printf("Número não divisivel");
    }


    return 0;
}