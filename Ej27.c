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
    int num1, num2, cantidad1 = 0, cantidad2 = 0;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2);

if (num1 > 0 && num2 > 0) // VERIFICA QUE EL NUMERO SEA POSITIVO
{
   cantidad1 = contador(num1);
    printf("La cantidad de digitos del primer numero es: %d", cantidad1);
    printf("\n");
     cantidad2 = contador(num2);
    printf("La cantidad de digitos del segundo numero es: %d", cantidad2);
}
else
{
    printf("Uno de los numeros ingresados es negativo o cero. Reintente");
}


    


    return 0;
}
