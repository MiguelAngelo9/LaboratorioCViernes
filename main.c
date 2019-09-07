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
	
	/*utilice el float por que en la instruccion pide que sea real,
	tambien el scanf con el %f por que pide ingresar una nota y el %f es lo que lee
	los float*/
	
	printf("\t\tActividad #1");                            
	float e;                                                
	printf("\n\nIngrese su Nota(real):");                  
	scanf("%f", &e);
    
	/*Utilice dos if con el else, para que asi me diera la oprtunidad de poner otro
    ya que el if solo se compone de dos, pero con el else, pude poner otro*/
    
	if (e>=5&&e<=10)                                       
	printf("\n\nUsted es APTO");                            
	else
	if (e>=0&&e<5)
	printf("\n\nUsted es NO APTO");
	else
	printf("\n\nERROR: Nota Incorrecta.");
	
	
	printf("\n\n\t\tAqui termina la Actividad #1");
	printf("\n\t\tGracias por su atencion");
	
	
	/******************************************************************************Terminando Actividad #1*************************************************************************/
	int x=1;
	printf("\n\n\t\tIngrese el numero 2 para avanzar con la siguiente Actividad: ", x);
	scanf("%d", &x);	
	/******************************************************************************Empezando Actividad #2**************************************************************************/


	printf("\n\n\t\tActividad #2");
	printf("\n\nIngrese un numero entero, que corresponda al dia de las semana, ej: 1 = Lunes, etc");

	/*El switch facil para poder poner todos los casos,
	los cuales son: lunes, martes, miercoles, etc.
	tambien utilice el char, por que pide caracteres*/
	
	int d=0;
	printf("\n\nNumero: ", d);
	scanf("%d", &d);
	printf("\n\nEl numero que ingreso es: %d", d);
	char Lunes[5], Martes[6], Miercoles[9], Jueves[6], Viernes[7], Sabado[6], Domingo[7];
	switch (d){                                                                                
	(d=1);                                                                                     
	case 1: printf("\n\nEl dia que usted eligio es: Lunes");                                   
	break;
	(d=2);
	case 2: printf("\n\nEl dia que usted eligio es: Martes");
	break;
	(d=3);
	case 3: printf("\n\nEl dia que usted eligio es: Miercoles");
	break;
	(d=4);
	case 4: printf("\n\nEl dia que usted eligio es: Jueves");
	break;
	(d=5);
	case 5: printf("\n\nEl dia que usted eligio es: Viernes");
	break;
	(d=6);
	case 6: printf("\n\nEl dia que usted eligio es: Sabado");
	break;
	(d=7);
	case 7: printf("\n\nEl dia que usted eligio es: Domingo");
	break;
	default: printf("\n\nERROR: Dia Incorrecto.");}
	
	/*El default para poner el ERROR Dia incorrecto*/
	
	printf("\n\n\t\tAqui termina la Actividad #2");
	printf("\n\t\tGracias por su atencion");
	
	
	/*********************************************************************************************Terminando Actividad #2********************************************************************************/
	int h; 
	h=3;
	printf("\n\n\t\tIngrese el numero 3 para continuar con la siguiente Actividad: ");
	scanf("%d", &h);
	/*********************************************************************************************Empezando Actividad Extra******************************************************************************/
	
	
	/*Aqui como nos dijeron que utilizaramos un menu, utilice uno para elegir ver algo, con el switch, me facilita las opciones*/
	
	printf("\n\n\t\tActividad Extra");
	int s=0;
	printf("\n\nNetflix");
	printf("\n\nIngrese un numero del 1 al 5 para elegir que serie ver: \n1.-Stranger things \n2.-Baki \n3.-Titans \n4.-Flash \n5.-Sabrina");
	printf("\n\nNumero: ", s);
	scanf("%d", &s);
	printf("\nSu numero es: %d", s);
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
	printf("\n\n\n\t\tAqui termina la Actividad Extra");
	printf("\n\t\tGracias por su atencion");
	/********************************************************************************************Final de las Actividades**************************************************************************************/
	return 0;
}
