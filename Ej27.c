// LEER 2 NUMEROS ENTEROS Y DETERMINAR CUAL TIENE MAYOR CANTIDAD DE DIGITOS
#include <stdio.h>

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

int main()
{
    int num1, num2, cantidad1 = 0;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2);
    cantidad1 = contador(num1);
    printf("La cantidad de digitos del primer numero es: %d", cantidad1);

    return 0;
}
