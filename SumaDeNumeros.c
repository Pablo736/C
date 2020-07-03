#include <stdio.h>
int main()

{
    int num1;   //Variables
    int num2;
    int resultado;


    printf("ingrese el primer valor\n");  //datos de entrada
    scanf("%d",&num1);
    printf("ingrese el segundo valor valor\n");
    scanf("%d",&num2);


    resultado = num1 + num2; //operacion


    printf("el resultado de la suma es :%d\n",resultado); //datod de salida


    return 0;

}