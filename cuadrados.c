/*Programa cuadrados.c
De la primaria:
Area y perímetro de cuadrado*/

#include <stdio.h>
#include <math.h>

//Calcular el area
void area()
{
        int lado;
        float a;
        printf("Escribe el lado del cuadrado: ");
        scanf("%d",&lado);
        a = lado*lado;
        printf("El area del cuadrado es: %f\n", a);
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
        }
        return 0;
}


