#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Switch-Case: Estructura de selecci�n m�ltiple
    Descripci�n: Men� telef�nico
*/

int main(){

    int opcion = 0; //Declarando variable opcion
    char opcion2; //Declarando variable opcion
	 
	do{
	
    printf("Bienvenido a nuestro centro telef�nico..bla bla bla...");
    printf("\nElige una opci�n [1-4]:\n");
    printf("\t1.- Quejas o sugerencias\n");
    printf("\t2.- Pagos\n");
    printf("\t3.- Revisar t�rminos y condiciones\n");
    printf("\t4.- Salir\n");
    scanf("%d", &opcion);  //Pidiendo al usuario un d�gito

			  	  switch(opcion){ //switch(1){...}
				case 1:
			        printf("\n\tUno de nuestros agentes atender� su caso, espere en la l�nea...");
					break;
				case 2:
			        //Submen�
			        printf("\n\t\tElige una opci�n [A-D]:\n");
			        printf("\t\tA.- Consulta de Saldo\n");
			        printf("\t\tB.- Pagar servicio\n");
			        printf("\t\tC.- Hablar con un ejecutivo\n");
			        printf("\t\tD.- Salir\n");
			        
			        scanf("%s", &opcion2);  //Pidiendo al usuario un d�gito
			        //fflush(stdin);
			        //opcion2 = getchar();
			        switch(opcion2){
			            case 'A':
			                printf("\t\t\tSaldo actual es de $250.00");
			                break;
			            case 'B':
			                printf("\t\t\tPagando....");
			                printf("\n\t\t\tAdeudo actual es de $0.0");
			                break;
			            case 'C':
			                printf("\t\t\tEspere en la l�nea");
			                break;
			            case 'D':
			                printf("\n\t\t\tAgradecemos su llamada...pero estamos de vacaciones, �NO MOLESTE!");
			                break;
			            default:
			                printf("\n\tElige una opci�n v�lida...");
			                break;
			        }
			        break;
			    case 3:
			        printf("\n\tBla bla bla bla bla bla...");
			        //TODO
			        //break;
			        //...
			        //...
			    case 4:
			        printf("\n\tAgradecemos su llamada...pero estamos de vacaciones, �NO MOLESTE!");
			       break;
			    default:
			        printf("\n\tElige una opci�n v�lida...");
			        break;
			    }
    } while ( opcion != 4);
    
    printf("\nFuera del switch");

    return 0;
}
