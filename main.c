#include <stdio.h>
#include <stdlib.h>
#define size 4
/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 09/11/2019
*Grupo: LaboratorioCViernes
*Horario: Viernes 7am-9am
*Matricula: 1822515
*/

/*********************************STRUCT ACTIVIDAD #1***************************************************/
struct pictureinfo{
	char name[100];      /*Estructura con sus elementos correspondientes*/
	int date_time;
};
struct pictureinfo pictures;   /*Declarando la estructura*/
struct pictureinfo *p;          /*Aqui utilizamos como declaramos la estructura y la cambiamos por un puntero*/
/******************************************TERMINA STRUCT DE ACTIVIDAD #1**************************************************/

/******************************************EMPIEZA STRUCT DE ACTIVIDAD #2*********************************/
struct coordinates{
	int latitude;
	int longitude;
};
struct coordinates places[size];
struct coordinates *c;
/******************************************TERMINA STRUCT DE ACTIVIDAD #2*****************************************/
int main(int argc, char *argv[]) {
/*****************************************************ACTIVIDAD #1*****************************************************************/
	p=&pictures;
	printf("\t\tActividad #1");     /*El catalago de fotos*/
	printf("\n\nCatalogo de Fotos: ");
	printf("\n\nPlaya", pictures.name);
	printf("\t\t10/08/2000", pictures.date_time);
	printf("\n\nCerro", pictures.name);
	printf("\t\t09/11/2009", pictures.date_time);
	printf("\n\nEscuela", pictures.name);
	printf("\t\t03/03/2003", pictures.date_time);
	printf("\n\nAmigos", pictures.name);
	printf("\t\t14/02/2010", pictures.date_time);
	printf("\n\nNavidad", pictures.name);
	printf("\t\t25/12/2015", pictures.date_time);
	printf("\n\nHalloween", pictures.name);
	printf("\t31/10/2019", pictures.date_time);

	printf("\n\n\n\nCatalogo de Fotos 2: ");   /*El segundo catalago de fotos o la segunda tabla que es la misma pero ahora envez de utilizar el nombre de la estrutura, usamos la variable del puntero que sustituimos*/
	printf("\n\nPlaya", (*p).name);
	printf("\t\t10/08/2000", (*p).date_time);
	printf("\n\nCerro", (*p).name);
	printf("\t\t09/11/2009", (*p).date_time);
	printf("\n\nEscuela", (*p).name);
	printf("\t\t03/03/2003", (*p).date_time);
	printf("\n\nAmigos", (*p).name);
	printf("\t\t14/02/2010", (*p).date_time);
	printf("\n\nNavidad", (*p).name);
	printf("\t\t25/12/2015", (*p).date_time);
	printf("\n\nHalloween", (*p).name);
	printf("\t31/10/2019", (*p).date_time);
/**********************************************************TERMINA ACTIVIDAD #1*******************************************/
/**********************************************************EMPIEZA ACTIVIDAD #2***************************************/
	printf("\n\n\n\t\tActividad #2");
	printf("\n\nGPS: ");
	printf("\n\n200", places[0].latitude);
	printf("\n300", places[0].longitude);
	printf("\n400", places[1].latitude);
	printf("\n100", places[1].longitude);
	printf("\n100", places[2].latitude);
	printf("\n400", places[2].longitude);
	printf("\n300", places[3].latitude);
	printf("\n200", places[3].longitude);
	printf("\n\n\n\nGPS 2:");
	c=&places;
	printf("\n\n100", (*c).latitude);
	printf("\n200", (*c).latitude);
	printf("\n300", (*c).latitude);
	printf("\n400", (*c).latitude);
	printf("\n\n\nGPS 3:");
	printf("\n\n100", (*c).longitude);
	printf("\n200", (*c).longitude);
	printf("\n300", (*c).longitude);
	printf("\n400", (*c).longitude);
/************************************************************TERMINA ACTIVIDAD #2*************************************************/
	return 0;
}
