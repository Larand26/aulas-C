#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta;

    printf("Digite o valor de A: \n");
    scanf("%lf", &a);
    printf("Digite o valor de B: \n");
    scanf("%lf", &b);
    printf("Digite o valor de C: \n");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    printf("esse é o valor de delta: %.2lf", delta);
    return 0;
}