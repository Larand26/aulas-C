#include <stdio.h>

int main(){
    int n, r;
    int binario[200];
    printf("Digite um número: \n");
    scanf("%d", &n);
    
    int i = 0;
    while (n >= 1){
        r = n % 2;
        binario[i] = r;
        i++;
        n /= 2;
    }
    
    for (i = i -1; i >= 0; i--){
        printf("%d", binario[i]);
    }
    
    
    return 0;
}