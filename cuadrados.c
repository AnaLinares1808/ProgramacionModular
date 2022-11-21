/*Programa cuadrados.c
De la primaria: 
Area y perimetro del cuadrado*/

#include <stdio.h>
#include <math.h>

//Calcular el area de un cuadrado
void area()
{
        int lado;
        float a;
        printf("Escribe el tamaño del lado: ");
        scanf("%d",&lado);
        a = lado*lado;
        printf("El area del cuadrado es: %.2f\n", a);
}

//Calcular el perimetro de un cuadrado
void perimetro()
{
	int lado2;
        float p;
        printf("Escribe el valor del lado: ");
        scanf("%d",&lado2);
        p = lado2+lado2+lado2+lado2;
        printf("El perimetro mide: %.2f\n", p);
}

//Calcular el area de un rectangulo
void areaRectangulo()
{
        int base, alt;
        float r;
        printf("Escribe el lado mayor (base): ");
        scanf("%d",&base);
        printf("Escribe el lado menor (altura): ");
        scanf("%d",&alt);
        r = base*alt;
        printf("El area del cuadrado es: %.2f\n", r);
}

//Calcular el area de un trapecio
void areaTrapecio()
{
        int baseMayor, baseMenor, alturaT;
        float t;
        printf("Escribe la base mayor: ");
        scanf("%d",&baseMayor);
        printf("Escribe la base menor: ");
        scanf("%d",&baseMenor);
	printf("Escribe la altura: ");
        scanf("%d",&alturaT);
        t = (baseMayor+baseMenor/2)*alturaT;
        printf("El area del cuadrado es: %.2f\n", t);
}

int main()
{
        char opc;
        printf("a) Area de un cuadrado\n");
        printf("b) Perimetro de un cuadrado\n");
	printf("c) Area de un rectangulo\n");
	printf("d) Area de un trapecio\n");
        printf("Elige una opcion: ");
        scanf("%c",&opc);

        switch(opc)
        {
                case 'a': area();
                          break;
                case 'b': perimetro();
                          break;
		case 'c': areaRectangulo();
			  break;
		case 'd': areaTrapecio();
			  break;
        }
        return 0;
}

