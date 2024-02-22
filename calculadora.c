/*
Integrantes del equipo:
-Santos Rivera Leilani Shareni
-Marin Torres Ma. Fernanda

Profesora: Perez de los Santos Mondragon Tanibet
Grupo: 4CM1
Materia: Sistemas Operativos
*/

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

    if (operador == '/')
    {
        if(y =! 0)
        {
            printf("La division de los dos numeros es %0.1f\n", (x / y));
        }
        else {
            printf("No se puede dividir entre 0 :(\n");
        }
    }
    return (0);
}
