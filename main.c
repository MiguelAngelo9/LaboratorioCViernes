#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*Nombre: Miguel Angel Fernandez Solis
*Matricula: 1822515
*Grupo: LaboratorioCViernes
*Fecha: 01-11-2019
*Horario: 7am-9am
*/
int cv(char *cadena){
	int vocales=0;
	int indice=0; /*indice para contar vocales*/
	for(indice = 0; cadena[indice] != '\0'; ++indice){
	char lv=tolower(cadena[indice]);
    if (
	lv=='a'|| 
	lv=='e'|| 
	lv=='i'|| 
	lv=='o'|| 
	lv=='u'
	)
	{
	vocales++; /*un contador*/
	}
	}
	return vocales; /*para que me regrese las voles que hay*/
}
int main(int argc, char *argv[]) {
	printf("\t\tActividad #1");
	char ent[100]; /*char por que es una cadena*/
	printf("\n\nIngrese una cadena: ");
	gets(ent);
	int vocales= cv(ent);
	printf("\n\nEl numero de vocales que tiene la cadena es: %d\n", vocales);
	/*************************************************************TERMINANDO ACTIVIDAD #1******************************************/
	int r=0;
	printf("Ingrese un numero para pasar a la sig actividad: ");
	scanf("%d", &r);
	/*************************************************************ACTIVIDAD #2*****************************************************/
	("\n\n\t\tActividad #2");
	int a, b, c;
   int *p1, *p2, *p3; /*declaracion de punteros*/
   printf("Ingrese el valor de a:\n");
   scanf("%d", &a);
   printf("Ahora el valor de b:\n");
   scanf("%d", &b);
   c=a+b; /*suma de punteros*/
   printf("a+b=%d\n", c);
	return 0;
} 
