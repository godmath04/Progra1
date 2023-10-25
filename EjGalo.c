// Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio de los numeros terminados en 5/
#include <stdio.h>

int main()
{
    int num;
    int suma = 0;
    int contador = 0;
    float promedio = 0;
    printf("Ingrese varios numeros y se suman los terminados en 5. Ingrese el cero para salir.\n");
    do
    {

        scanf("%d", &num);
        if (num % 10 == 5)
        {
            suma = suma + num;
            contador++;
        }
    } while (num != 0);
    printf("La suma de los los numeros con digitos terminados en 5 es: %d\n", suma);
    promedio = suma/contador;
    printf("El promedio de la suma es: %f\n", promedio);
    return 0;
}
