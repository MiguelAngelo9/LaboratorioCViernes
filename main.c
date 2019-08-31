#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Miguel Angel Fernandez Solis
*Fecha: 30/08/2019
*Grupo: LaboratorioCviernes
*Horario: Viernes 7am-9am
*Matricula: 1822515
*/

int main(int argc, char *argv[]) {
	int y;
	y=1;
	printf("Escriba el numero 1 para empezar con la actividad: ", y);
	scanf("%d", &y); 
	/*aqui utilice un int, un scanf y una variable que iguale a un numero, por que queria hacer un comando para que todo fuera a su tiempo,
	y no todo de golpe corrido, por ejemplo introducir el numero que te pide para ir a la primera actividad */
	
	/*
	*Actividad #1
	*Introduzca dos numeros por teclado
	e imprima en pantalla el numero mas grande*/
	
	printf("\n\n\t\tActividad #1 \nIntroduzca dos numeros por teclado e imprima en pantalla el numero mas grande:");
	
	/*Como el problema pide introducir dos numeros por teclado, entonces hacemos un scnaf para poder introducirlos, y yo utilize int
	para poder poder variables de entero*/
	
	int m, n;        
	m=0;
	n=0,
	/* mis variables son m y n, las cuales iguale a 0 por que van a estar en constante cambio ya que 
	los valores son introducidos por quien corre el programa*/
	
	printf("\n\nIngrese el primer numero m entero: ", m);
	scanf("%d", &m);
	printf("El primer numero que usted ingreso es: %d", m);
	/*Aqui utilizo los printf para poder imprimir en la pantalla unas intrucciones que ayuden a quien corre el programa,
	primero pido el numero que quiera ingresar y ya despues se lo muestro para tener todos los datos correctos*/
		
	printf("\n\nIngrese el segundo numero n entero: ", n);
	scanf("%d", &n);
	printf("El segundo numero que usted ingreso es: %d", n);
	
	if (m>n)
	printf("\n\n EL resultado es: m es mayor que n", m,n);
	/*Utilice 2 if para poder decidir si era mayor o menor la variable m de n o n de m, despues el printf para poder imprimir el resultado en la
	pantalla, ya sea que m>n o n>m */
	
	if (n>m)
	printf("\n\n El resultado es: n es mayor que m", n,m);
	
	printf("\n\n\n\t\tAqui termina Actividad #1");
	/*con este printf quiero dar a entender que ya se acaba la actividad, aparte de usar un comentario largo para demostrarlo*/
		
	
	
	/******************************************Actividad 2 *************************************/
	
	/*
	*Actividad #2
	*crea un programa que declare tres variables de tipo entero con 
	valores a = 5, b = 3, c = -12 y muestre si se cumplen o no las siguientes
	condiciones usando if else */
	
	int x;
	x=2;
	printf("\n\n\n\nEscriba el numero 2 para continuar con la siguiente actividad: ", x);
	scanf("%d", &x);
	
	
	printf("\n\n\n\t\tActividad #2 \nCrea un programa que declare tres variables de tipo entero con valores a=5, b=3, c=-12 y muestre si se cumplen o no las siguientes condiciones usando if else:");
	
	int a, b, c;
	a=5;
	b=3;
	c=-12;
	/* Las variables aqui se igualan a un valor dado por la misma actividad, ya que no van a estar cambiando*/
	
	int h;
	h=9; 
	printf("\n\nEscriba el numero 9 para continuar con el primer ejercicio: ", h);
	scanf("%d", &h);
	/* Aqui tambien puse el comando para ir mas adecuadamente a cada ejercicio de la actividad, pedi introducir cierto numero para 
	poder acceder mas facil y mejor a los ejercicios */
	
	printf("\n\na es mayor que 3?");
	if (a>3)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");	
	}
	/*Primero hago un printf para imprimir en pantalla lo que viene siendo la pregunta, despues utilice un if para poner una condicion y si esa no se cumple, utilice un else
	para irse a otra, tambien utilice las llaves, por que sino el programa solo correria el if.
	pregunto si a es mayor que 3? y si es asi con un printf imprimira "Si se cumple" y sino es cierto, se va al else que tendria que imprimir "No se cumple" */
	
	printf("\n\nEscriba el numero 9 para continuar con el segundo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\na es mayor que c?");
	if (a>c)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el tercer ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\nb es diferente de c?");
	if (b!=c)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el cuarto ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\na es igual a 3?");
	if (a==3)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el quinto ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\n a multiplicado por b es igual a 15?");
	if (a*b==15)
	printf("\n\nSi se cumple");
	else
	{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el sexto ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\nc dividido entre b es menor que a?");
	if (c/b<a)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el septimo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\nc dividido entre b es igual a -10?");
	if (c/b==-10)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el octavo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\na mas b mas c es igual a 5?");
	if (a+b+c==5)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el noveno ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\na mas b es igual a 8? y a menos b es igual a 6?");
	if ((a+b==8)&&(a-b==6))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el decimo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\na mas b es igual a 8? y a menos b es igual a 2?");
	if ((a+b==8)&&(a-b==2))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el onceavo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\n a mas b es igual a 8? o  a menos b es igual a 6?");
	if ((a+b==8)||(a-b==6))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 9 para continuar con el doceavo ejercicio: ", h);
	scanf("%d", &h);
	
	printf("\n\n a es mayor que 3? y b es mayor que 3? y c es menor que 3?");
	if (a>3&&b>3&&c<3)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\n\n\t\tAqui termina Actividad #2");
	
	/*Aclarando de nuevo que la actividad finaliza aqui con un printf */
	
	/*************************************************************Actividad Extra****************************************************/
	
	int u;
	u=8;
	printf("\n\nEscriba el numero 8  para continuar con la Actividad Extra: ", u);
	scanf("%d", &u);
	
	printf("\n\n\n\n\t\tActividad Extra \nRepite la Actividad 2 pero con valores introducidos por el teclado:");
	
	int p, t, e;
	p=0;
	t=0;
	e=0;
	
	/*Este programa es el mismo que la actividad #2, solo que aqui utilice un scanf ya que hay que introducir diferentes valores, para las variables */
	
	printf("\n\nIntroduzca 3 numeros enteros cualesquiera");
	
	printf("\n\nIngrese el primer numero p: ", p);
	scanf("%d", &p);
	printf("\nEl primer numero ingresado es: %d", p);
	
	printf("\n\nIngrese el segundo numero t: ", t); 
	scanf("%d", &t);
	printf("\nEl segundo numero ingresado es: %d", t);
	
	printf("\n\nIngrese el tercer numero e: ", e);
	scanf("%d", &e);
	printf("\nEl tercer numero ingresado es: %d", e);
	
	/* Como contaba, esto de arriba no esta en la actividad #2 por que en ella ya te estan dando los valores para las variables,
	y aqui hay que pedir que el sujeto que corra el programa los ingrese.
	Yo utilice int para poder hacer mas faciles las cosas.
	Por eso utilizo un printf para dar instrucciones de ingresar un numero entero, un scanf para poder teclear un numero entero 
	y otro printf para imprimir en pantalla el numero ingresado por el sujeto y asi no queden dudas de lo que tiene que hacer el programa*/
	
	
	printf("\n\nEscriba el numero 8  para continuar con el primer ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np es mayor que 3?");
	if (p>3)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");	
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el segundo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np es mayor que e?");
	if (p>e)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el tercer ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\nt es diferente de e?");
	if (t!=e)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el cuarto ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np es igual a 3?");
	if (p==3)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el quinto ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\n p multiplicado por t es igual a 15?");
	if (p*t==15)
	printf("\n\nSi se cumple");
	else
	{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el sexto ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\ne dividido entre t es menor que p?");
	if (e/t<p)
	printf("\n\nSi se cumple");
	else{
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el septimo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\ne dividido entre t es igual a -10?");
	if (e/t==-10)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el octavo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np mas t mas e es igual a 5?");
	if (p+t+e==5)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el noveno ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np mas t es igual a 8? y p menos t es igual a 6?");
	if ((p+t==8)&&(p-t==6))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el decimo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\np mas t es igual a 8? y p menos t es igual a 2?");
	if ((p+t==8)&&(p-t==2))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el onceavo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\n p mas t es igual a 8? o  p menos t es igual a 6?");
	if ((p+t==8)||(p-t==6))
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\nEscriba el numero 8  para continuar con el doceavo ejercicio: ", u);
	scanf("%d", &u);
	
	printf("\n\n p es mayor que 3? y t es mayor que 3? y e es menor que 3?");
	if (p>3&&t>3&&e<3)
	printf("\n\nSi se cumple");
	else {
	printf("\n\nNo se cumple");
	}
	
	printf("\n\n\n\nAqui finaliza la Actividad Extra");
	
	/*En la actividad extra utilice el mismo comando para que pasara ejercicio por ejercicio y no irnos a todos de golpe,
	tambien iguale a cero para poder ingresar en cada variable cualquier numero entero*/
	
	return 0;
}
