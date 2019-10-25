#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Estudiante{
	char nombre[20];
	char sexo[20];
	int edad;
	float notas[4], prom=0;
}; 
struct Estudiante estdt[20];
int main(int argc, char *argv[]) {
	printf("\t\tACTIVIDAD #1");
	printf("\n\nNombre del Estudiante: ");
	printf( "\n\"%s\"\n", gets(estdt[0].nombre));
	printf("\nSexo del Esrudiante: ");
	printf("\n\"%s\"\n", gets(estdt[1].sexo));
	printf("\nEdad del Estudiante: ");
	scanf("%d", &estdt[2].edad);
	printf("\n\"%d\"\n", estdt[2].edad);
	for(i=0;i<5;i++){
	printf("\n\nIngrese las 5 notas: ");
	scanf("\n%f", &estdt[3].notas);
	
	
	return 0;
}
