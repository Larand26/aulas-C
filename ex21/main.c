#include <stdio.h>

int main(){
    int n, atual = 1, anterior = 0;

    printf("Digite um número N: \n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        printf("%d, ", anterior);
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}