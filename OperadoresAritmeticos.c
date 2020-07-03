#include <stdio.h>
int main()

{
    int num1,num2,resultado,a=12,b=3; //los datos se pueden colocar si necesidad de poner cada vez "int" en vez de una coma ","
    

    printf("ingrese el primer valor\n");
    scanf("%d",&num1);
    printf("ingrese el segundo valor valor\n");
    scanf("%d",&num2);


    resultado = a*(num1 + num2) + b*(b + num2); //variables a y b modificaran el resultado como una funcion


    printf("el resultado es :%d\n",resultado);


    return 0;

}