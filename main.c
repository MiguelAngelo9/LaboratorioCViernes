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
	/* Utilice variables como calif de calificacion para saber que iba a ingresar el usuario, sum de suma para ir sumando lo que iba ingresando, prom de promedio para alfinar despues de
	haber sumado todo, sacar el promedio, con de un contador, c para la variable que llevaria la cuenta de las calificaciones ingresadas*/
	printf("\t\tActividad #1");
	printf("\n\nIngrese las 10 calificaciones que obtuvo el alumno calificando de 0 a 10");
	int calif, sum, prom, con, c;
	calif=0; 
	sum=0;
	prom=0;
	c=0;
	con=0;
	/*Utilice un for empezando con c=1 por que empezaba introduciendo la primer calificacion, c<=10 por que eran las que le iba a pedir*/
	for(c=1; c<=10; c++){
	printf("\n\nCalificacion: ");
	scanf("%d", &calif);
	sum+=calif;
	con++;
	prom=(sum/10);
	printf("\n\nSu promedio es: %d", prom);}
	/*El if y el else, para mandar a imprimir aprobado o reprobado*/
	if(prom>7){
	printf("\n\nAPROBADO");}
	else{
	printf("\n\nREPROBADO");
	}
	printf("\n\n\n\t\tAqui Termina la Actividad ");
/***************************************************************************************************************************Terminando Act #1******************************************************************************************/
int a=2;
printf("\n\n\nIngrese el numero 2 para pasar a la siguiente Actividad: ", a);
scanf("%d", &a);
/****************************************************************************************************************************ACTIVIDAD #2****************************************************************************************/
 printf("\n\n\n\t\tActividad #2");
 printf("\n\nIngrese un numero base y otro que sera el exponente");
 int ba, ex, res, e;
 res=1;
 printf("\n\nIntroduzca un numero base: ");
 scanf("%d", &ba);
 printf("Introduzca un numero exponente: ");
 scanf("%d", &ex);
 for(e=1; e<=ex; e++){
res=res*ba;
 }
 
 printf("\n\nEl resultado de multiplicar %d por si mismo %d veces es igual a: %d", ba, ex, res);
 printf("\n\n\nAqui termina la Actividad #2");
 /****************************************************************************************************************************Terminando Act #2************************************************************************************************************************/
	return 0;
}
