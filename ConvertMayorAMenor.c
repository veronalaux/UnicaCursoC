#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*char c='A';
    short s=4;*/

    char c=127;   //
    short s=300; //es mayor y pierde informacion 

    //printf("%d",c);
    //printf("%c",c);

    c=s;

    //********************************** tamaños
    //printf("%d\n",sizeof(c)*8);
    //printf("%d\n",sizeof(s)*8);
    //****************************
    printf("%d",c);

    return EXIT_SUCCESS;
}