#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if(n1 < 0 || n2 < 0){
        printf("Números inválidos");
        return 0;
    }

    int r, mdc;
    do{
        r = n1 % n2;
        printf("%d ÷ %d = %d com resto %d \n", n1, n2, n1 / n2, r);
        if(r == 0){
            mdc = n2;
        }else{
            n1 = n2;
            n2 = r;
        }
    } while (r != 0);

    printf("O (MDC) é igual a: %d", mdc);
    return 0;
}