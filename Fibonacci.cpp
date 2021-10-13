#include <stdio.h>


int main(void)
{
  int x,y,z,cont,stop;
  
  x=0;
  y=1;
  z=0;
 
  printf("Cuantos numeros deseas: ");
  scanf("%d", &stop);
	if (stop==1){
	printf("%d\n",x);
		}
  //printf("0\n1\n");
  //for(inicio; paro; incremento/decremento){}
  	else
  	{
  		printf("%d\n",x);
  		for (cont=0;cont<stop-1;cont++){
         
      //printf("%d\n",z);  //z = 1
      
     	x=y;  //x=1
      	y=z;  //y=2
      	z=x+y;  //z = 1 + 1= 2
      	printf("%d\n",z);
	  }
  
  }
 
  getchar();
  return 0;
}
