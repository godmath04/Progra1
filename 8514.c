// LEER UN ENTERO Y MOSTRAR LOS COMPRENDIDOS ENTRE 1 Y EL NUMERO LEIDO
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1 = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    // mostrar enteros
    printf("Numeros enteros: \n");
    for (int i = 1; i <=num1; i++)
    {
        printf("%d ",i );
    }
    // mostrar pares  
    printf("\n");
    printf("Numeros pares: \n");
    for (int j = 1; j <= num1; j++)
    {   
        if (j % 2 == 0)
        {
            printf("%d ", j);
        }
        
    }
    // mostrar divisores exactos
    printf("\n");
    printf("Divisores exactos de %d:\n", num1);
    for (int k = 1; k <= num1; k++)
    {
        if (num1 % k == 0)
        {
            printf("%d ", k);
        }
        
    }
    

    return 0;
}
