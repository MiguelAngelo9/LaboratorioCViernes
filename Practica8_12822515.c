#include <stdio.h>
#include <stdlib.h>

/*
*Nombre: Miguel Angel Fernandez Solis
*Fecha: 27/09/2019
*Grupo: LaboratorioCViernes
*Horario: Viernes 7am-9am
*Matricula: 1822515
*/
int main(int argc, char *argv[]) {
/****************************************************************************************************ACTIVIDAD #1**********************************************************************/
	printf("\t\tActividad #1");
int nc[24], r;
r=2;
/*en el ejercicio dice que cambiemos el valor de la r a 21 y pues solo es cuestion de cambiarlo para que en pantalla aparezca*/
nc[r] = 57;
/*nc= numero de coches*/
printf("\n\nLa hora R es %d\n", r);
printf("\nEl numero de coches en la hora %d fue de %d coches\n", r, nc[r]);

/*************************************************************************************************TERMINA ACTIVIDAD #1******************************************************************/
printf("\n\n\n\t\tActividad #2");
int numc[24], a, b, r2;
/*numc= numero de coches*/
a=8;  
b=4;
r2=a/b;
/*aqui declaro r2 por que creo que afectaria que siguiera siendo la misma para el segundo programa*/
numc[r2] = 57;
printf("\n\nEl valor de a es: %d y el valor de b es: %d", a, b);
/*en el ejercicio dice que hay que dejar enclaro cuanto vale a y b*/
printf("\n\nLa hora r2 es %d\n", r2);
/*me imagino que es para que sea claro por que la r2 vale lo que vale*/
printf("\nEl numero de coches en la hora %d fue de %d coches\n", r2, numc[r2]);
/***************************************************************************************************TERMINA ACTIVIDAD #2**************************************************************************/
	return 0;
}
