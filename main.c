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
	int s, r, e;
	e=10;
	char c[e];
	printf("Ingrese cualquier palabra: ");
	scanf("%s",c);
	printf("\n\nLa Palabra que ingreso es: %s\n",c);
	char c2[e];
	for(s=strlen(c)-1,r=0;0<=s;s--,r++)
    c2[r] = c[s];
	c2[r] = '\0';
    printf("\n\nSu inverso es: %s\n",c2);
    printf("\n\nSi ");
/*******************************************************************************************************************************************************/

/************************************************************************ACTIVIDAD #2*******************************************************************/
    int em,re,b,co[10]={};
    re=0;
    b=0;
    char l[10];
    printf("\n\nIngrese distintas letra(s) repetidas(hasta un maximo de 10): ");
    scanf("%c",&em);
    for (re=0;re<em;r++)
    {	
    printf("\n\nLetra(s) %s: ",re+1);
    scanf("%c",&re);     
    }
    for (re=0;re<em;re++) 
    { 
    for (b=0;b<em;b++)
    {
    if ((re)==(b)) 
    co[re]++;
    }
    printf("%c %c\n", re,co[re]);
    }
	return 0;
}
