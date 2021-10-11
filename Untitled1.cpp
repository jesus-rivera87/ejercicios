#include<stdio.h>


/* Autor: Jesus Rivera
Descripcion: Division entre dos numeros enteros
*/

int num1 ;
int num2 ;
int resultado = 0;

int main (){
	
	//operacion 
	printf("\n\tDivicion entre dos numeros");
	printf("\n------------------------------");
	printf("\nDame el primer numero:");
	scanf("%i, &num1");
	printf("\nDame el siguiente numero:");
	scanf("i%, &num2");
	resultado = num1 / num2;
	printf ("El resultado de dividir %i entre %i es %i",num1, num2, resultado);
	
	return 0;
}
