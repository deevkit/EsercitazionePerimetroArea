#include <stdio.h>
#include <math.h>

int main() {

    // Dichiarazione delle variabili (Base, Lato obliquo, Altezza, Perimetro, Area)
    float b, l, h, P, A;

    // INPUT
    printf("Inserisci la base: ");
    scanf("%f", &b);

    printf("Inserisci il lato obliquo: ");
    scanf("%f", &l);

    h = sqrt(l * l - (b / 2) * (b / 2));

    P = b + 2 * l;
    A = (b * h) / 2;

    printf("Perimetro = %.2f\n", P);
    printf("Area = %.2f\n", A);

    return 0;
}