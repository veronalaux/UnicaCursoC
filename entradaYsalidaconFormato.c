#include<stdio.h>
#include<stdlib.h>

int main()
{
    //variables enteras
    int entero=57;
    unsigned sin_signo=100;
    int octal= 057; //siempre hay que ponerle un cero antes del numero
    int hexadecimal=0x57;
    char caracter= 'A';
    char cadena[]="hola mundo";
    long long int entero_muy_muy_largo=1234567891011LL;

    printf("%d\n", entero_muy_muy_largo);
    printf("%lld\n", entero_muy_muy_largo);





    /*puts=> imprimir cadenas 
    puts("Ingresa valores enteros");*/

    return EXIT_SUCCESS;

}