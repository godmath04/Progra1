#include<stdio.h>
#include<stdbool.h>
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
    int numero = 32768;
    printf("El numero 32768 es el mayor de los enteros, cual es el primer primo: ");
    for (int i = numero; i >= 2; i--)
    {
        if(esPrimo(i)){
            printf("El primer numero primo es: %d", i);
            break;
        }
    }
    
    return 0;
}
