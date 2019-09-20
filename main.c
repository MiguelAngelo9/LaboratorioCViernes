#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 20/09/2019
*Grupo: LaboratorioCViernes
*Horario: 7am-9am
*Matricula: 1822515
*/
/*******************************************************************ACTIVIDAD #1************************************************************************************************************************/
int main(int argc, char *argv[]) {
	printf("\t\tActividad #1");
	printf("\n\nIngrese las 10 calificaciones que obtuvo el alumno");
	int c=0;
	for(c=0; c<=10; c++){
	printf("\n\nCalificacion: ");
	scanf("%d", &c);}
	while(c>7){
	printf("APROBADO");
	}
	
	printf("\n\n\n\t\tAqui Termina la Actividad ");
/***************************************************************************************************************************Terminando Act #1******************************************************************************************/
int a=2;
printf("\n\n\nIngrese el numero 2 para pasar a la siguiente Actividad: ", a);
scanf("%d", &a);
/****************************************************************************************************************************ACTIVIDAD #2****************************************************************************************/
 
	return 0;
}
