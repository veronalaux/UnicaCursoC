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

    puts("ingresa un entero");
    scanf("%d", &entero);

    puts("ingresa un entero base octal");
    scanf("%i", &octal);

    puts("ingresa un entero base hexadecimal");
    scanf("%i", &hexadecimal);

    printf("Entero: %d\n", entero);
    printf("Entero: %#o\n", octal);
    printf("Entero: %#x\n", hexadecimal);

    return EXIT_SUCCESS;
}