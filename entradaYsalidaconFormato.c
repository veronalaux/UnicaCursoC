#include<stdio.h>
#include<stdlib.h>

/*****************

% banderas  ancho   precision   tamaño   caracter

# formato hexadecimal
printf  
******************/
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

    // printf("%d\n", entero_muy_muy_largo);
    // printf("%lld\n", entero_muy_muy_largo);
    // printf("%o\n", octal);
    // printf("%#x\n", hexadecimal);
    // printf("%#X\n", hexadecimal);
    // printf("%d\n", hexadecimal);


    int resultado;
    
    // resultado=printf("%c\n",caracter);
    // printf("%d\n",resultado);

    // resultado=   printf("%s\n",cadena);
    // printf("%d\n", resultado);

    // puts(cadena);
    // putchar(caracter);


    //variables de punto flotante
    // printf("%e\n",1234567.89);
    // printf("%e\n", +1234567.89);
    // printf("%e\n", -1234567.89);
    // printf("%E\n",1234567.89);
    // printf("%.2f\n",1234567.89);
    // printf("%g\n",1234567.89);
    // printf("%G\n",1234567.89);
    



    printf("%04d\n",1); //para rellenar el ancho del campo cuando no hay espacio 
    printf("%+4d\n",12);   //+ hace que agrega el signo al numero (+positivo, - negativo) 
    printf("%4d\n",123);    
    printf("%4d\n",1234);
    printf("%4d\n",12345);
    
    



    /*puts=> imprimir cadenas 
    puts("Ingresa valores enteros");*/

    return EXIT_SUCCESS;

}