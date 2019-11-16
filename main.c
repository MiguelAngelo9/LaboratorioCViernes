#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 15/11/2019
*Grupo: LaboratorioCViernes
*Horario: Viernes 7am-9am
*Matricula: 1822515
*/

int main(int argc, char *argv[]) {
	printf("\t\t\tActividad #1");
	char ifilename[] = "archivo.txt";
   char ofilename[] = "archivo_alreves.txt";
   char name[30];

   FILE *ofp, *ifp;                    /* Declara apuntadores a archivo */
   ifp = fopen(ifilename,"r");         /* Abre archivo*/
   fscanf(ifp,"%s",name);  /* Lee datos de entrada*/
   ofp = fopen(ofilename,"w");         /* Abre archivoalreves*/
   fprintf(ofp,"%s\n", name); /* Escribe los datos */
   fclose(ifp); fclose(ofp);           /* Cierra los archivos */
   /************************************************************************TERMINA ACTIVIDAD #1*********************************************/
   
   /*************************************************************************ACTIVIDAD #2***************************************************/
    printf("\n\n\n\t\t\tActividad #2");
	FILE *resultados;
   int numero1=0, numero2=0, suma=0;
    
   resultados = fopen("sumas.txt", "a+");
   if (resultados == NULL)
    printf("No se pudo abrir el archivo.\n");
   else
   {
    do
    {
    fscanf(resultados, "%d + %d = %d", &numero1, &numero2, &suma);
    if (feof(resultados))
    break;
    printf("%d + %d = %d\n", numero1, numero2, suma);
    }
    while (!feof(resultados));  
    printf("Escriba dos numeros.\n\"000\" para salir.\n");
    do
    {
    printf("Primer numero: ");
    scanf("%d", &numero1);
    if (numero1 == 0) 
    exit(1);  
    printf("Segundo numero: ");
    scanf("%d", &numero2);    
    suma = numero1 + numero2;   
    printf("%d + %d = %d\n", numero1, numero2, suma);
    fprintf(resultados, "%d + %d = %d\n", numero1, numero2, suma);
    }
    while (numero1 != 0); 
    fclose(resultados);
   }
	return 0;
}
