#include<stdio.h>
#include<stdlib.h> //aqui esta la constante exit_success
//PODEMOS DEFINIR COMO 1 el success

int main()
{
    int sum=17, cuenta=5;
    double media;

   // media= sum/cuenta; 
    //aqui se hace una conversion automatica del tipo, se hace una promocion automatica

    //si queremos hacer un cast
    media=(double) sum/ (double)cuenta;
    printf("valor de la media es: %f\n", media);
    
    printf("hola, hice cambios");



    
    return EXIT_SUCCESS;
    
}
