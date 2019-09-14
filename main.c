#include <stdio.h>
#include <stdlib.h>

/*
*Nombre: Miguel Angel Fernandez Solis
*Matricula: 1822515
*Fecha: 13/09/2019
*Grupo: LaboratorioCViernes
*Horario: 7am-9am
*/

int main(int argc, char *argv[]) {
/**********************************************************************************ACTIVIDAD #1*************************************************************************************************************/	
	printf("\t\tActividad #1");
	char l;
	int n, con, na;
	n=0;
	na=0;
	con=0;
	do{
	printf("\n\nIngrese un numero entero: ");
	scanf("%d", &n);
	na+=n;
	con++;
	printf("\n\nEl numero(s) que ingreso es: %d ", n);
	printf("\nSu suma es: %d", na);
	printf("\n\nDesea introducir otro numero (s/n)?: ", l);
	fflush(stdin);
	scanf("%c", &l);
	}
	while(l!='n');
	printf("n\nLa Suma de sus numeros ingresados es: %d", na);
	
	printf("\n\n\n\t\tAqui Termina Actividad #1");
/***************************************************************************************************************************************************************************************************************************************************************/
   int a;
   a=2;
   printf("\n\n\n\n\nIngrese el numero 2, para pasar a la siguiente Actividad: ");
   scanf("%d", &a);

/**************************************************************************************************************************************************Actividad #2**************************************************************************************************/

    printf("\n\n\n\n\t\tActividad #2");
	int r, rep, ac;
	r=0;
	ac=0;
	rep=0;
	do{
	printf("\n\nIngrese un numero entero: ");
	scanf("%d", &r);
	ac+=r;
	rep++;
	printf("\n\nEl numero(s) que ingreso es: %d ", r);
	printf("\nSu suma es: %d", ac);
	}
	while (r<=100);
	
	/**********************************************************************************************************************************************Aqui termina Actividad #2****************************************************************************************************/
	return 0;
}
