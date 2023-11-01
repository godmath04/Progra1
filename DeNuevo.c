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

int cantidadDigitos(int num)
{
    int cantidad = 0;
    while (num != 0)
    {
        num = num / 10;
        cantidad++;
    }
    return cantidad;
}

int digitoMayor(int num)
{
    int Mayor = -num;
    int auxiliar;
    while (num != 0)
    {
        auxiliar = num % 10;
        if (auxiliar > Mayor)
        {
            Mayor = auxiliar;
        }
        num = num / 10;
    }
    return Mayor;
}

int main()
{
    int opcion = 0;
    int num1 = 0, num2 = 0, num4 = 0, num5 = 0;
    printf("Ingrese el valor del ejercicio que desea realizar: \n"
           "1. Verificar si un numero es primo.\n"
           "2. Numero de primos que hay hasta un numero.\n"
           "3. Primer numero primo antes de 32768.\n"
           "4. Cantidad de Digitos\n"
           "5. Digito mayor de un numero\n"
           "6. Utilizando anidadas obtener la secuencia\n"
           "7. Secuencia de triada\n"
           "8. Ejercicio 50 del libro\n"
           "9. Serie Fibonacci\n");
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
    case 4:
        printf("Cantidad de digitos del numero. Ingrese su numero: \n");
        scanf("%d", &num4);
        printf("La cantidad de digitos de %d es: %d.\n", num4, cantidadDigitos(num4));

    case 5:
        printf("Ingrese el numero y se obtendra el digito mayor de dicho numero:\n");
        scanf("%d", &num5);
        printf("El numero mayor de %d es %d.\n", num5, digitoMayor(num5));

    case 6:
        int n = 0, m = 1;
        for (int i = 0; i < 10; i++)
        {
            printf("%d | %d\n", n, m);
            n++;
            if (i % 2 == 0)
            {
                m++;
            }
        }

    case 7:
        int k = 1;
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                printf("%d | %d | %d\n", k, i, j);
                k++;
            }
        }

    case 8:
        int l = 0;
        for (int i = 1; i < 3; i++)
        {
            for (int j = 1; j < 5; j++)
            {
                printf("%d | %d\n", l, i);
                l++;
            }
            
        }

    case 9: 
        int primero = 0, segundo = 1, siguiente = 0;
        printf("Secuencia de Fibonacchi hasta el 1000\n.");
        while (siguiente <= 1000)
        {
            printf("%d ", siguiente);
            primero = segundo;
            segundo = siguiente;
            siguiente = primero + segundo;
        }
        
            
    default:
        break;
    }
    return 0;
}
