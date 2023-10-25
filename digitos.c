// PROGRAMA QUE LEE NUMEROS ENTEROS Y VERIFICA EL QUE TIENE MAYOR CANTIDAD DE DIGITOS
#include <stdio.h>

// BUCLE QUE MIRA LA CANTIDAD DE DIGITOS DE UN NUMERO
int cantidad(int num){
    int contador = 0;
    while (num != 0) // Mientras el numero no sea decimal entre 0 y 1
    {
        num = num/10; 
        contador++;
    }
    return contador;
}

int main()
{
    int numero = 0;
    printf("Ingrese el numero: \n");
    scanf("%d", &numero);
    printf("La cantidad de numeros de el numero es: %d\n", cantidad(numero));

    printf("Ahora se va a observar cual es el mayor numero entre los digitos: \n");

    int Mayor = -numero; // nos aseguramos que los siguientes sean mayores
    while ( numero != 0) //para trabajar mientras haya un numero entero  entre 0 y 1
    {
        int digito;
        digito = numero % 10;  // 354% 10 = 4
        if (digito > Mayor)
        {
            Mayor = digito; 
        }
        numero = numero / 10; // 354 / 10 = 35.4
    }
    printf("El mayor numero entre los digitos es: %d\n", Mayor);
    
    

    return 0;
}
