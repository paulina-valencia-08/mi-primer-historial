/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float numero1;
float numero2; 
float suma;
float resta;
float multiplicacion;
float division;

void operacionsuma(){
    printf("SUMAR\n");
        printf("ingresa el primer numero:");
        scanf("%f", &numero1);
        printf("ingresa el segundo numero:");
        scanf("%f", &numero2);
    suma = numero1 + numero2;
    printf("la suma de ambos numeros es de: %f\n", suma);
}

void operacionresta(){
    printf("RESTAR\n");
        printf("ingresa el primer numero:");
        scanf("%f", &numero1);
        printf("ingresa el segundo numero:");
        scanf("%f", &numero2);
    resta = numero1 - numero2;
    printf("la resta de ambos numeros es de: %f\n", resta);
}

void operacionmultiplicacion(){
    printf("MULTIPLICAR\n");
        printf("ingresa el primer numero:");
        scanf("%f", &numero1);
        printf("ingresa el segundo numero:");
        scanf("%f", &numero2);
    multiplicacion = numero1 * numero2;
    printf("la multiplicacion de ambos numeros es de: %f\n", multiplicacion);
}

void operaciondivision(){
    printf("DIVISION\n");
        printf("ingresa el numero a dividir:");
        scanf("%f", &numero1);
        printf("ingresa el numero por el que deseas dividir el anterior:");
        scanf("%f", &numero2);
    division = numero1 / numero2;
    printf("la division de los numeros es de: %f\n", division);
}


int main()
{
    int opcion;
    
    
    printf("===BIENVENIDO A TU CALCULADORA===\n");
    printf("1. sumar\n");
    printf("2. restar \n");
    printf("3. multiplicar\n");
    printf("4. dividir\n");
    printf("5.finalizar el programa\n");
    printf("que operacion deseas hacer:");
    scanf("%d", &opcion);
    
    while(opcion != 5){
    switch(opcion){
        case 1:
        operacionsuma();
        break;
        
        case 2:
        operacionresta();
        break;
        
        case 3:
        operacionmultiplicacion();
        break;
        
        case 4:
        operaciondivision();
        break;
        
        case 5:
        printf("hasta luego");
        break;
        
        default:
        if (opcion>= 5 && opcion<=0){
            printf("opcion incorrecta");
        }
    }
}

    return 0;
}