#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 30/08/2019
*Grupo: LaboratorioCviernes
*Horario: Viernes 7am-9am
*Matricula: 1822515
*/

int main(int argc, char *argv[]) {
	/*
	*Actividad #1
	*Introduzca dos numeros por teclado
	e imprima en pantalla el numero mas grande*/
	
	int m, n;
	m=0;
	n=0,
	
	printf("Ingrese el primer numero entero: %d", m);
	scanf("%d", &m);
	printf("\nEl primer numero que usted ingreso es: %d", m);
		
	printf("\nIngrese el segundo numero entero: %d", n);
	scanf("%d", &n);
	printf("\nEl segundo numero que usted ingreso es: %d", n);
	
	if (m>n)
	printf("m es mayor que n");
	else{
	printf("m no es mayo que n, pero n si es mayor que m");	
	}
	
	/******************************************Actividad 2 *************************************/
	
	/*
	*Actividad #2
	*crea un programa que declare tres variables de tipo entero con 
	valores A = 5, B = 3, C = -12 y muestre si se cumplen o no las siguientes
	condiciones usando if else */
	
	int A, B, C;
	A=5;
	B=3;
	C=-12;
	
	if (A>3)
	printf("\nSi se cumple");
	else{
	printf("\nNo se cumple");	
	}
	
	if (A>C)
	printf("\nSi se cumple");
	else{
	printf("\nNo se cumple");
	}
	
	if (B!=C)
	printf("\nSi se cumple");
	else{
	printf("\nNo se cumple");
	}
	
	if (A==3)
	printf("\nSi se cumple");
	else {
	printf("\nNo se cumple");
	}
	
	if (A*B == 15)
	printf("\nSi se cumple");
	else
	{
	printf("\nNo se cumple");
	}
	
	if (C/B<A)
	printf("\nSi se cumple");
	else{
	printf("\nNo se cumple");
	}
	return 0;
}
