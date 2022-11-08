/*Programa triangulo.c
De la primaria: Teorema de Pitagoras
La suma de cada cateto al cuadrado es igual a la hipotenusa al cuadrado
Triangulo rectandulo: un angulo de 90°*/

//Calculo de la hipotenusa

#include <stdio.h>
#include <math.h>

//Calcular la hipotenusa
void hipotenusa() 
{
	int co, ca;
	float h;
	printf("Escribe la longitud del cateto adyacente: ");
	scanf("%d",&co);
	printf("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&ca);
	h = sqrt(co*co+ca*ca);
	printf("La hipotenusa mide: %f\n",h);
}

//Calcular el area
void area()
{
	int base, alt;
	float a;
	printf("Escribe la base: ");
	scanf("%d",&base);
	printf("Escribe la altura: ");
        scanf("%d",&alt);
	a = base*alt/2;
	printf("El area del triangulo es: %f\n", a);
}

//Calcular el tercer angulo
void angulo()
{
	float a1,a2,a3;
	printf("Escribe el valor de los 2 angulos: ");
	scanf("%f%f",&a1,&a2);
	a3 = 180-(a1+a2);
	printf("El tercer angulo mide: %f\n", a3);
}

int main()
{
	char opc;
	printf("a) Hipotenusa de un triangulo rectangulo\n");
	printf("b) Area de un triangulo\n");
	printf("c) Tercer angulo de un triangulo\n");
	printf("Elige una opcion: ");
	scanf("%c",&opc);

	switch(opc)
	{
		case 'a': hipotenusa();
			 break;
		case 'b': area();
			 break;
		case 'c': angulo();
			 break;
		default: printf("Error, por favor intente de nuevo\n");
			 break;
	}
	return 0;
}
	
