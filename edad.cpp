#include<stdio.h>


/* Autor: Jesus Rivera
Descripcion: Division entre dos numeros enteros
*/

int num1 = 0 ;
int num2 = 0 ;
int resultado = 0;

int main (){
	
	//operacion 
	printf("\n\tDivicion entre dos numeros");
	printf("\n\t------------------------------");
	printf("\nDame el primer numero:");
	scanf("%i, &num1");
	printf("\nDame el siguiente numero:");
	scanf("i%, &num2");
	resultado = num1 / num2;
	if (num2 == 0){
		printf("La divicion entre 0 no esta definida")
	}
	printf ("El resultado de dividir %i entre %i es %i",num1, num2, resultado);
	
	return 0;
}
