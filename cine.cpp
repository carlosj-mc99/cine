#include <stdlib.h>
#include <stdio.h>


int main(){
	printf("\t\t SISTEMA DE CONSULTAS Y VENTA DE BOLETOS PARA '*CINEMAR*'\n\n");
	 int opc;
	char p={30};
	
	printf("1.consultar listado de peliculas en cartelera\n");
	 	printf("2.consultar horarios\n");
	 	printf("3.comprar boletos\n");
	 	printf("4.proximamnte\n");
	 	printf("5.salir\n\n");
	 do{
	 	printf("\n\ningrese la opcion requerida:\n\n");
	scanf("%d",&opc);
	 	switch(opc){
	 		case 1:
	 			
	 		break;
	 		
	 		case 2: 
	 		
	 		break;
	 		
	 		case 3:
	 		printf("\tfolio:----\n");
	 		printf("\tingrese la pelicula:\n\n");
	 			scanf("\n%s",&p);
	 		printf("\tseleccione sus asientos:\n\n");
	 			//scanf("",);
	 		printf("\tseleccione la hora deseada:\n\n");
	 		//	scanf("",);
	 		printf("\tsu sala es:----\n\n");
	 	    printf("\tpago:----\n");
	 			
	 		break;
			 
			 case 4:
			 	
			 break;	
			 
			 default :
			 	printf("\n\n\n¡¡¡¡    usted esta saliendo    !!!!!\n\n\n");
		 }
	system("PAUSE");
	 	
	 }while(opc!=5);

}
