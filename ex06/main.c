#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2, euclidiana;

    printf("Digite o x1: \n");
    scanf("%lf", &x1);
    printf("Digite o y1: \n");
    scanf("%lf", &y1);
    printf("Digite o x2: \n");
    scanf("%lf", &x2);
    printf("Digite o y2: \n");
    scanf("%lf", &y2);

    euclidiana = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("O resultado é: %.2lf", euclidiana);

    return 0;
}