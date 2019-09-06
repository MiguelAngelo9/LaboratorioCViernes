#include <stdio.h>
#include <stdlib.h>

/*
*Nombre: Miguel Angel Fernandez Solis
Fecha: 06/09/2019
*Matricula: 1822515
*Grupo: LaboratorioCViernes
*Horario: Viernes 7am-9am
*/

int main(int argc, char *argv[]) {
	printf("\t\tActividad #1");
	printf("\nIngrese con numeros enteros su calificacion"); 
	int a=0;
	printf("\nCalificacion: %d", a);
	scanf("%d", &a);
	printf("\nSu calificacion es: %d", a);
	if(5<=a<=10)
	printf("\n\nUsted es Apto");
	else {
	(0<=a<5);
	printf("\n\nUsted es No Apto");
	}
	if(0>a>10)
	printf("\n\nError: Nota Incorrecta");
	printf("\n\nAqui termina la Actividad #1");
	printf("\nGracias por su atencion");
	/******************************************************************************Terminando Actividad #1*************************************************************************/
		
	/******************************************************************************Empezando Actividad #2**************************************************************************/
	int x=1;
	scanf("%d", &x);
	printf("\n\n\nIngrese el numero 2 para avanzar con la siguiente Actividad: %d", x);
	printf("\n\n\t\tActividad #2");
	printf("\n\nIngrese un numero entero, que corresponda al dia de las semana, ej: 1 = Lunes, etc");
	int d=0;
	printf("\nNumero: %d", d);
	scanf("%d", d);
	printf("\nEl numero que ingreso es: %d", d);
	char Lunes[5], Martes[6], Miercoles[9], Jueves[6], Viernes[7], Sabado[6], Domingo[7];
	if(d=1)
	printf("Feliz Lunes");
	if(d=2)
	switch (d){
		(d=1);
		case 1: printf("\nLunes");
		break;
		(d=2);
		case 2: printf("\nMartes");
		break;
		(d=3);
		case 3: printf("\nMiercoles");
		break;
		(d=4);
		case 4: printf("\nJueves");
		break;
		(d=5);
		case 5: printf("\nViernes");
		break;
		(d=6);
		case 6: printf("\nSabado");
		break;
		(d=7);
		case 7: printf("\nDomingo");
		break;
		default: printf("\nERROR: Dia Incorrecto.");
		
	}
	printf("\n\nAqui termina la Actividad #2");
	printf("\nGracias por su atencion");
	/*********************************************************************************************Terminando Actividad #2********************************************************************************/
	
	/*********************************************************************************************Empezando Actividad Extra******************************************************************************/
	printf("\n\n\t\tActividad Extra");
	int s=0;
	printf("\n\nNetflix");
	printf("\n\nIngrese un numero para elegir que serie ver");
	printf("\nNumero: %d", s);
	printf("Su numero es: %d", s);
	switch(s) {
	case 1: printf("\n\nUsted eligio ver Stranger Things");
	break;
	case 2: printf("\n\nUsted eligio ver Baki");
	break;
	case 3: printf("\n\nUsted eligio ver Titans");
	break;
	case 4: printf("\n\nUsted eligio ver Flash");
	break;
	case 5: printf("\n\nUsted eligio ver Sabrina");
	break;
	}
	printf("\n\n\t\tAqui termina la Actividad Extra");
	printf("Gracias por su atencion");
	/********************************************************************************************Final de las Actividades**************************************************************************************/
	return 0;
}
