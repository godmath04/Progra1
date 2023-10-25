// Leer un numero entero y determinar cual es el mayor de sus digitos
#include <stdio.h>
    int main()
{
    int num, num_fijo;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    num_fijo = num;
    if (num < 0)
    {
        num = -num;
    }

    int digito_max = 0, digito = 0;
    while (num > 0)
    {
        digito = num % 10;
        if (digito >= digito_max)
        {
            digito_max = digito;
        }
        num = num / 10;
    }
    printf("El mayor de los digitos de %d es: %d", num_fijo, digito_max);
}