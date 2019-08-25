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

/*Aqui empiezo el segundo ejericcio*/
printf("\n\n");
int b, resfinal = 0;
/*Declarar variables*/
printf("\nIngrese un valor para b:", b);
scanf("%d", &b);

printf("El  numero ingresado es: ", b);

resfinal = (6((b + 1) /(8)) - ((2*b) -(3)) / (16));
printf("\nEl resfinal es: %d", resfinal); 
/*Hacemos las operaciones y sacamos el resultado, sustituimos y listo*/

/*Actividad 2 Hacer una aplicacion en dado el input, mostrar el output de 2 funciones algebraicas*/

int c, Res = 0;

printf("Introducir un valor para c: ", c);
scanf("%d", &c);

printf("El numero ingresado es: ", c);

res = ((2/3) []c - (1- (c-2) / (3)] + 1);
printf("\nEl res es: %d", res);


return 0;
}

