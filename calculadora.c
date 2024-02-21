#include <stdio.h>
int main(void)
{
    float x, y;
    char operador;
    printf("Coloca el primer numero: ");
    scanf("%f", &x);

    printf("Coloca el operador de la operacion que quieres hacer: ");
    scanf(" %c", &operador);

    printf("Coloca el segundo numero: ");
    scanf("%f", &y);

    //OPERADORES a 2 cifras

    if (operador == '+')
    {
        printf("La suma de los dos numeros es %0.1f\n", (x + y));
    }

    if (operador == '-')
    {
        printf("La resta de los dos numeros es  %0.1f\n", (x - y));
    }

    if (operador == '*')
    {
        printf("El producto de los dos numeros es  %0.1f\n", (x * y));
    }
    return (0);
}