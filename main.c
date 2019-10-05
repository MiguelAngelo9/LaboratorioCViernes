#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 04/10/2019
*Grupo: LaboratorioCViernes
*Horario: Viernes 7am-9am
*Matricula: 1822515*/

int main(int argc, char *argv[]) {
/***********************************************************************ACTIVIDAD #1*******************************************************/	
	printf("\t\tActividad #1");
	int veoe[6][10][1];
	veoe[3][7][1]=4234;
	printf("\n\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido: %d unidades", veoe[3][7][1]);
/**********************************************************************TERMINA ACTIVIDAD #1************************************************/

/***********************************************************************ACTIVIDAD #2*********************************************************/
    printf("\n\n\t\tActividad #2");
    int e;
    e=(4234+10);
    for(e=0;e<11;e++)
    printf("\n\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido: %d unidades", veoe[3][7][1]+e);
/***********************************************************************TERMINA ACTIVIDAD #2************************************************/
	return 0;
}
