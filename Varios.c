#include <stdio.h>
#include <stdbool.h>

// UN NUMERO ES PRIMO O NO
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

// CANTIDAD DE DIGITOS DE UN NUMERO
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

// DIGITO MAYOR DE UN NUMERO
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

// Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio de los numeros terminados en 5/
float suma5(int num)
{
    int suma = 0, conteo = 0;
    float promedio = 0.0;
    do
    {

        if (num % 10 == 5)
        {
            suma = suma + num;
            conteo++;
        }
    } while (num != 0);
    promedio = suma / conteo;
    return promedio;
}

int main()
{
    int caso = 0;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    int num5 = 0;
    printf(" EJERCICIOS VARIOS REPASO \n");
    printf("Ingrese el numero del ejercicio a realizar:\n"
           "1.Obtencion numero primo.\n"
           "2.Mayor cantidad de digitos.\n"
           "3. Obtencion numero mayor.\n"
           "4. Suma de los numeros terminados en 5.\n"
           "5. Cantidad de los numeros primos hasta el numero ingresado.\n");
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

    case 4:
        printf("Va a ingresar varios numeros hasta que aplaste el cero y le dara el promedio de dichos numeros.\n");
        int suma = 0, conteo = 0;
        int promedio = 0;
        do
        {
            printf("Ingrese su numero: ");
            scanf("%d", &num4);
            if (num4 % 10 == 5)
            {
                suma = suma + num4;
                conteo++;
            }
        } while (num4 != 0);
        promedio = suma / conteo;
        printf("El promedio de la suma es %d.", promedio);

    case 5:
        int cantidad_primos = 0;
        printf("Ingrese el numero para contar la cantidad de primos: ");
        scanf("%d", &num5);

        for (int i = 2; i <= num5; i++)
        {
            if (esPrimo(i) == 1)
            {
                cantidad_primos++;
            }
        }
        printf("La cantidad de primos del numero %d es %d. ", num5, cantidad_primos);

    default:
        break;
    }
    return 0;
}
