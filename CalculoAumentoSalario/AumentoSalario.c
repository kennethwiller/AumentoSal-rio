#include <stdio.h>
#include <stdlib.h>

int main () {

    float salario;

    printf ("-----------------------------------\n");
    printf ("-- CALCULO DE AUMENTO NO SALARIO --\n");
    printf ("-----------------------------------\n\n");

    printf ("Digite o valor do seu salario: ");
    scanf ("%f", &salario);

    if (salario <= 1000) {
        salario = salario * 1.15; // 15% de aumento  
    } 

    else if (salario > 1000 && salario <= 2000) {
        salario = salario * 1.10; // 10% de aumento
    }

    else if (salario > 2000) {
        salario = salario * 1.05; // 5% de aumento
    }

    printf ("O novo salario e de: %4.f", salario);
}