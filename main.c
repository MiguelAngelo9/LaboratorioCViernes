#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Miguel Angel Fernandez Solis
1822515
LaboratorioCViernes 7am-9am
*/

typedef struct Panda
{
char *nombrep;
float peso;
int anyonac;
char sexo;
}mip;
void LeerPanda(mip *p);
int EdadPanda(mip p); //devuelve la edad
int TenerBebes(mip p); //devuelve 1 si puede tener bebes y 0 si no.
void main()
{
	printf("Actividad #2");
mip mp;
int puede;
LeerPanda(&mp);
puede=TenerBebes(mp);

if(puede==1)
printf("El panda %s puede tener bebes\n",mp.nombrep);
else
printf("El panda %s no puede tener bebes\n",mp.nombrep);
}
void LeerPanda(mip *p)
{
char nom[35];
printf("El panda se llama: ");
gets(nom);
p->nombrep=(char *)malloc(sizeof(char) * strlen(nom)+1);
if(p==NULL)
{
printf("Insuficiente espacio de memoria\n");
exit(1);
}
strcpy(p->nombrep,nom);
fflush(stdin);
printf("Su peso es:");
scanf("%f",&p->peso);
fflush(stdin);
printf("Su anyo de nacimiento es:");
scanf("%d",&p->anyonac);
fflush(stdin);
printf("Su sexo es:");
scanf("%c",&p->sexo);
}
int EdadPanda(mip p)//devuelve la edad

{
int edadp;
edadp=2012 - p.anyonac;
return(edadp);
}
int TenerBebes(mip p) //devuelve 1 si puede tener bebes y 0 si no.
{
int res,edad;
edad=EdadPanda(p);
if(edad>=5 && (p.sexo=='f' || p.sexo=='F'))
res=1;
else
res=0;
return(res);
/************************************************************************************************************************************/

printf("Actividad #1");
typedef struct
{
char nomest;

// nombre estudiante

int edad;
char sexo;
int *notas;
} Estudiante;
typedef struct
{
int numest;
Estudiante *estu;
}RegistroNotas;
void main ()
{
char Nombre[30];
RegistroNotas rest;
int i,n,sumnot=0,indicemay=0;
float prom,mayorp=0;
printf ("Cuantos Estudiantes?\n");
scanf ("%d", &rest.numest);
rest.estu=(Estudiante *) malloc(rest.numest * sizeof(Estudiante));
if(rest.estu==NULL)
{
printf("Insuficiente Espacio de Memoria");
exit(1);
}
for (i=0; i<rest.numest; i++)
{
printf ("Nombre Estudiante[%d]: ",i+1);
fflush(stdin);
gets(Nombre);
rest.estu[i].nomest=(char *)malloc(sizeof (char) * (strlen(Nombre)+1));
strcpy (rest.estu[i].nomest, Nombre);
printf ("Edad[%d]: ",i+1);
fflush(stdin);
scanf ("%d",&rest.estu[i].edad);
printf ("Sexo[%d]: ",i+1);
fflush(stdin);
scanf ("%c",&rest.estu[i].sexo);
rest.estu[i].notas=(int *)malloc(NN *sizeof(int));
if(rest.estu[i].notas==NULL)
{
printf("Insuficiente Espacio de Memoria");
exit(1);
}
printf("Las 5 calificaciones del estudiante %d son\n",i+1);
sumnot=0;
prom=0;
for(n=0;n<5;n++)
{
printf("Nota [%d]: ",n+1);
scanf("%d",&rest.estu[i].notas[n]);
sumnot+=rest.estu[i].notas[n];
}
prom=sumnot/5;
if(prom>mayorp)
{
indicemay=i;
mayorp=prom;
}
}
printf("El estudiante con mayor promedio es:%s\n",rest.estu[indicemay].nomest);
free(rest.estu[0].nomest);
free(rest.estu);
}
}
