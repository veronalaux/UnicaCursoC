//SCANF
#include<stdio.h>
#include<stdlib.h> 

/*
% * ancho  tamaño   caracter
*/


int main()
{
    long long int lli;

    // puts("ingresa un entero muuuuy grande");
    // scanf("%10lld", &lli);  //le indico cuantos numeros va a almacenar y lo asignara en lli
    // printf("%lli",lli);

    int entero, octal, hexadecimal;

    // puts("ingresa un entero");
    // scanf("%d", &entero);

    // puts("ingresa un entero base octal");
    // scanf("%i", &octal);

    // puts("ingresa un entero base hexadecimal");
    // scanf("%i", &hexadecimal);


    puts("Ingresa decimal, octal y hexadecimal");
    int resultado= scanf("%d%o%x", &entero, &octal, &hexadecimal);

    printf("%d\n", resultado);

    printf("Entero: %d\n", entero);
    printf("Entero: %#o\n", octal);
    printf("Entero: %#x\n", hexadecimal); //si le dejamos la d, tomara como entero en base 10

    return EXIT_SUCCESS;
}