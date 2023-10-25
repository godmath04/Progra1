// LEER 2 NUMEROS ENTEROS Y DETERMINAR CUAL TIENE MAYOR CANTIDAD DE DIGITOS // VERIFICAR SI ESOS NUMEROS SON PRIMOS

#include <stdio.h>
#include <stdbool.h>

// FUNCION PARA CONTAR LA CANTIDAD DE DIGITOS EN BASE A UNA DIVISIÓN DE 10
// El momento que la division obtiene un decimal de 0.1 la funcion lo interpreta como entero
int contador(int numero)
{
    int conteo = 0;
    while (numero != 0)
    {
        numero = numero / 10;
        conteo++;
    }
    return conteo;
}

// FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO Y DEVUELVE UN TRUE O FALSE
bool esPrimo(int numero)
{
    int count = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1, num2, cantidad1 = 0, cantidad2 = 0;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2);
    printf("\n");

    if (num1 > 0 && num2 > 0) // VERIFICA QUE EL NUMERO SEA POSITIVO
    {

        int scan = 0;
        printf("Seleccione la actividad que desea realizar con:\n 1. Cantidad de digitos.\n 2. El numero es primo o no.\n 100. Salir\n");
        scanf("%d", &scan);
        printf("\n");
        while (scan != 100)
        {
            // BUCLE SWITCH PARA ELEGIR LO QUE EL USUARIO DESEE REALIZAR
            switch (scan)
            {
            case 1:
                printf("Cantidad de Digitos\n");
                cantidad1 = contador(num1);
                printf("La cantidad de digitos del primer numero es: %d", cantidad1);
                printf("\n");
                cantidad2 = contador(num2);
                printf("La cantidad de digitos del segundo numero es: %d", cantidad2);
                printf("\n");
                if (cantidad1 > cantidad2)
                {
                    printf("El numero con mayor cantidad de digitos es el numero %d \n", num1);
                }
                else
                {
                    printf("El numero con mayor cantidad de digitos es el numero %d \n", num2);
                }
                printf("\n");
                // VOLVER A SELECCIONAR EL CASO 
                printf("Seleccione la actividad que desea realizar con:\n 1. Cantidad de digitos.\n 2. El numero es primo o no.\n 100. Salir\n");
                scanf("%d", &scan);
                break;
            case 2:
                printf("Numero es primo o no:\n");
                if (esPrimo(num1) == 1)
                {
                    printf("El numero %d es primo.\n", num1);
                }
                else
                {
                    printf("El numero %d no es primo \n", num1);
                }
                if (esPrimo(num2) == 1)
                {
                    printf("El numero %d es primo.\n", num2);
                }
                else
                {
                    printf("El numero %d no es primo \n", num2);
                }
                // VOLVER A SELECCIONAR EL CASO 
                printf("Seleccione la actividad que desea realizar con:\n 1. Cantidad de digitos.\n 2. El numero es primo o no.\n 100. Salir\n");
                scanf("%d", &scan);
                break;
                break;
            default:
                printf("No ha seleccionado ninguna opcion.\n");
                break;
            }
        };
    }
    else
    {
        printf("Uno de los numeros ingresados es negativo o cero. Reintente");
    }

    return 0;
}
