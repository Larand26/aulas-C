#include <stdio.h>
#include <stdbool.h>

int main(){
    float a, b, c;

    printf("Defina as 3 medidas \n");
    scanf("%f", &a);
    printf("Primeira medida obtida %f\n", a);
    scanf("%f", &b);
    printf("Segunda medida obtida %f\n", b);
    scanf("%f", &c);
    printf("Terceira medida obtida %f\n", c);

    if(a > 0 && b > 0 && c > 0 &&
       a < b + c && b < a + c && c < a + b){
        bool a_b = a == b;
        bool a_c = a == c;
        bool b_c = b == c;

        if(a_b && a_c && b_c){
            printf("Triangulo Equilátero");
        }else if(!a_b && !a_c && !b_c){
            printf("Triângulo Escaleno");
        }else{
            printf("Triângulo Isósceles");
        }
    }else{
        printf("Triângula impossível");
    }
    
    return 0;
}