/*hacer un programa en c que calcule el numero de personas de un grupo de 10 personas
1.numero de personas mayores de edad
2.numero  de personas mayores de edad hombres y mayores de edad mujer 
3. cantidad de hombres del grupo y cantidad de mujeres del grupo*/


#include <stdlib.h>
#include <stdio.h>

int nPersonas= 10;
int totalPersonas[10];
int edadPersonas;
char sexo;
int contadorHombres,contadorMujeres,contadorHmayor,contadorMumayor,contadormayorEdad;
int cantidadVeces;


void main(){


for(cantidadVeces = 0; cantidadVeces < nPersonas; cantidadVeces++){

printf("Ingrese su Sexo\n");
printf("Pulse H para Hombre o M para Mujer\n");
scanf("%c",&sexo);

if(sexo == 'H' || 'h'){

printf("Digite su edad\n");
scanf("%i", &edadPersonas);

if(edadPersonas > 17){

contadormayorEdad++;
contadorHmayor++;
contadorHombres++;

}else(edadPersonas < 17);{
    contadorHombres++;

}





}else(sexo == 'M' || 'm');{

printf("Digite su edad\n");
scanf("%i",&edadPersonas);

if(edadPersonas > 17){
contadormayorEdad++;
contadorMujeres++;
contadorMumayor++;


}else(edadPersonas < 17);{
    contadorMujeres++;

}


}

}
 printf("El numero de hombres mayores de edad %i\n", &contadorHmayor);
 printf("el numero de mujeres mayores de edad es %i\n",&contadorMumayor);
 printf("el numero de hombres es %i\n", &contadorHombres);
 printf("el numero de mujeres es %i\n", &contadorMujeres);
 printf("el numero de personas mayores de edad es %i\n", &contadormayorEdad);





}



