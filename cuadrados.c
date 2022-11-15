/*Programa cuadrados.c
De la primaria: 
Area y perimetro del cuadrado*/

#include <stdio.h>
#include <math.h>

//Calcular el area
void area()
{
        int lado;
        float a;
        printf("Escribe el tamaño del lado: ");
        scanf("%d",&lado);
        a = lado*lado;
        printf("El area del cuadrado es: %f\n", a);
}

//Calcular el perimetro
void perimetro()
{
	int lado2;
        float p;
        printf("Escribe el valor del lado: ");
        scanf("%d",&lado2);
        p = lado2+lado2+lado2+lado2;
        printf("El perimetro mide: %f\n", p);
}

int main()
{
        char opc;
        printf("a) Area de un cuadrado\n");
        printf("b) Perimetro de un cuadrado\n");
        printf("Elige una opcion: ");
        scanf("%c",&opc);

        switch(opc)
        {
                case 'a': area();
                          break;
                case 'b': perimetro();
                          break;
        }
        return 0;
}

