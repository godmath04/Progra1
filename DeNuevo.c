#include <stdio.h>
#include <stdbool.h>

// FUNCION PARA LOS PRIMOS
bool esPrimo(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int opcion = 0;
    int num1 = 0, num2 = 0;
    printf("Ingrese el valor del ejercicio que desea realizar: \n"
           "1. Verificar si un numero es primo.\n"
           "2. Numero de primos que hay hasta un numero.\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
        // VERIFICAR SI UN NUMERO ES PRIMO
    case 1:
        printf("Se verifica si el numero es primo.\n"
               "Ingrese su numero.\n");
        scanf("%d", &num1);
        if (esPrimo(num1) == 1)
        {
            printf("En el numero %d es primo.", num1);
        }
        else
        {
            printf("El numero %d no es primo", num1);
        }

        break;
        // NUMEROS PRIMOS ANTES DE EL NUMERO INGRESADO
    case 2:
        int contador = 0;
        printf("Ingrese su numero: \n");
        scanf("%d", &num2);
        for (int i = 1; i <= num2; i++)
        {
            if (esPrimo(i) == true)
            {
                printf("%d ", i);
                contador++;
            }
        }
        printf("La cantidad de primos antes el numero %d es %d: ", num2, contador);

        // Primer numero primo antes de 32768
    case 3:
        int numero = 32768;
        printf("Se mostrar el primer numero primo antes de 32768.\n");
        for (int i = numero; i >= 2; i--)
        {
            if (esPrimo(i) == true)
            {
                printf("El primo inmediato inferior es %d.\n", i);
                break;
            }
        }

    default:
        break;
    }
    return 0;
}
