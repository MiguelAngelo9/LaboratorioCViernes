#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 11/10/2019
*Grupo: LaboratorioCViernes
*Horario: 7am-9am
*Matricula: 1822515
*/

int main(int argc, char *argv[]) {
/*********************************************************************ACTIVIDAD #1**********************************************************************/
    printf("\t\tActividad #1");
	char p[200];
    int e, s;
    int palindromo = 1;
    printf("\n\nIngrese cualquier cadena: ");
    fflush(stdout);
    gets(p);
    s=strlen(p)-1;
    for(e=0; e<strlen(p)/2; e++, s--) {
        printf("\n\nComprobando %c==%c\n", *(p+e), *(p+s));
        if (*(p+e)!=*(p+s)) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
        printf("\nEs un palindromo");
    else
        printf("\nNo es un palindromo");
/*******************************************************************************************************************************************************/

/************************************************************************ACTIVIDAD #2*******************************************************************/
    printf("\n\n\n\t\tActividad #2");
	int lon;
	char c[20];
	char l = 'a';
	char l2 = 'b';
	char l3 = 'c';
	char l4 = 'd';
	char l5 = 'e';
	int i, t, z, g, f, z2=0, g2=0, f2=0, t2=0, j=0;

	printf("\n\nIngrese su cadena: ");
	scanf("%s", c);
	lon=strlen(c);

	for(i=0;i<lon;i++){
		if(c[i]==l){
			j++;
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
	printf("\nLa letra %c aparece %i veces\n",l,j);
	printf("\nLa letra %c aparece %i veces\n",l2,t2);
	printf("\nLa letra %c aparece %i veces\n",l3,z2);
	printf("\nLa letra %c aparece %i veces\n",l4,g2);
	printf("\nLa letra %c aparece %i veces\n",l5,f2);
	
	return 0;
}
