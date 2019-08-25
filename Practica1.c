#include <stdio.h>
/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 24/08/2019
*Grupo: Laboratorio de Programacion
*Horario: 7am-9am
*Matricula: 1822515
 */


int main() {
	/* Actividad #1
Hacer una aplicación en dado el  input, mostrar el output de 2 funciones algebraicas */ 

int x, resultado= 0;
/* Declaramos las variables a usar*/

printf("Ingrese un valor para x: ", x);
scanf("%d", &x);
/*Utilizamos el printf y el scanf para mostrar y que pueda ingresar el numero deseado*/

printf("El numero ingresado es: ", x);

resultado = ((x - 1) / (4))- ((x - 5)/ (36));
printf("\nEl resultado es: %d", resultado);

/*Hacemos las respectivas operaciones y imprimimos el resultado final*/

return 0;
}

