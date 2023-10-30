#include <stdio.h>

int main()
{
    // LEER DOS ENTEROS Y MOSTRAR LOS COMPRENDIDOS ENTRE ELLOS
    int num1 = 0, num2 = 0;
    int menor, mayor;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        mayor = num1;
        menor = num2;
    }
    else
    {
        mayor = num2;
        menor = num1;
    }

    // COMPRENDIDOS ENTRE ELLOS
    printf("Los numeros comprendidos entre ellos son: \n");
    for (int i = menor; i <= mayor; i++)
    {
        printf("%d ", i);
    }

    // TERMINADOS EN 4 ENTRE ELLOS
    printf("\n");
    printf("Los numeros terminados en 4 entre ellos son: \n");
    for (int i = menor; i <= mayor; i++)
    {
        if (i % 10 == 4)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
