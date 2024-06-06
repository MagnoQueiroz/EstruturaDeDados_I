#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro) {
    float raiz = sqrt(3);
    *area = (3*l*raiz/2);
    *perimetro = 6*l;

}

int main() {
    float l, area, perimetro;
    float newl;


    printf("digite o L : ");
    scanf("%f", &l);
    newl = pow(l, 2);

    calcula_hexagono( newl, &area, &perimetro);

    printf("area = %.2f\n", area);
    printf("perimetro = %.2f\n", perimetro);
    return 0;

}
