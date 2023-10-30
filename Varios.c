#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num)
{
    int contador = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Digitos(int num)
{
    int cont = 0;
    while (num != 0)
    {
        num /= 10;
        cont++;
    }
    return cont;
}

int digitoMayor(int num)
{
    int mayor = -1;
    int verificador;
    while (num != 0)
    {
        verificador = num % 10;
        if (verificador >= mayor)
        {
            mayor = verificador;
        }
        num = num / 10;
    }
    return mayor;
}
    int main()
    {
        int caso = 0;
        int num1 = 0, num2 = 0, num3 = 0;
        printf(" EJERCICIOS VARIOS REPASO \n");
        printf("Ingrese el numero del ejercicio a realizar:\n1.Obtencion numero primo.\n2.Mayor cantidad de digitos.\n3. Obtencion numero mayor\n");
        scanf("%d", &caso);
        switch (caso)
        {
        case 1:
            printf("NUMEROS PRIMOS\n");
            printf("Ingrese un numero\n");
            scanf("%d", &num1);
            if (esPrimo(num1) == 1)
            {
                printf("El numero %d es primo\n", num1);
            }
            else
            {
                printf("El numero %d no es primo\n", num1);
            }

            break;
        case 2:
            printf("Ingrese un numero para obtener cuantos digitos tiene\n");
            scanf("%d", &num2);
            printf("La cantidad de digitos de %d es %d.\n", num2, Digitos(num2));

            break;
        case 3:
            printf("Ingrese un numero para obtener su digito mayor:\n");
            scanf("%d", &num3);
            printf("El mayor digito del numero %d es %d\n.", num3, digitoMayor(num3));

        default:
            break;
        }
        return 0;
    }
