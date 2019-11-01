#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*Nombre: Miguel Angel Fernandez Solis
*Matricula: 1822515
*Grupo: LaboratorioCViernes
*Fecha: 01-11-2019
*/
void FuncionV(){
	int lon;
	char c[100];
	char l='a';
	char l2='e';
	char l3='i';
	char l4='o';
	char l5='u';
	int i, t, z, g, f, i2, t2, z2, g2, f2;
	i2=0; t2=0; z2=0; g2=0; f2=0;
	for(i=0;i<lon;i++){
	if(c[i]==l){
	i2++;
	}
	}
	for(t=0;t<lon;t++){
	if(c[t]==l2){
	t2++;
	}
	}
	for(z=0;z<lon;z++){
	if(c[z]==l3){
	z2++;
	}
	}
	for(g=0;g<lon;g++){
	if(c[g]==l4){
	g2++;
	}
	}
	for(f=0;f<lon;f++){
	if(c[f]==l5){
	f2++;
	}
	}
	return;
};
int main(int argc, char *argv[]) {
	printf("\t\tActividad #1");
	char c[100];
	int lon;
	int i, t, z, g, f, i2, t2, z2, g2, f2;
	i=0; t=0; z=0; g=0; f=0; i2=0; t2=0; z2=0; g2=0; f2=0;
	printf("\n\nIngrese su cadena: ");
	scanf("%s", &c);
	lon=strlen(c);
	printf("\n\nLa vocal %c se repite %d veces\n", i, i2);
	printf("\n\nLa vocal %c se repite %d veces\n", t, t2);
	printf("\n\nLa vocal %c se repite %d veces\n", z, z2);
	printf("\n\nLa vocal %c se repite %d veces\n", g, g2);
	printf("\n\nLa vocal %c se repite %d veces\n", f, f2);
	FuncionV();
	/*************************************************************TERMINANDO ACTIVIDAD #1******************************************/
	printf("\n\n\n");
	/*************************************************************ACTIVIDAD #2*****************************************************/
		printf("\n\n\t\tActividad #2");
	int e, s;
	e=0; s=0;
	int *r, *b;
	*r=&e;
	*b=&s;
	int sum=0;
	printf("\n\nIngrese un valor entero para la primer variable: ");
	scanf("%d", &e);
	printf("\n\nIngrese un valor entero para la segunda variable: ");
	scanf("%d", &s);
	printf("\n\nSus variables son: %d y %d", e, s);
	sum=(e+s);
	printf("\n\nLa suma de sus dos variables es: *r+*b");
	return 0;
}
