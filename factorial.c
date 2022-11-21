//Programa de factoriales
//DE la preparatoria, realizar numeros factoriales (el limite sera el 13)

#include <stdio.h>

int factorial(int n)
{
int f;
if (n==0)
{f=1;}
else
{f=n*factorial(n-1);}
return f;
}

int main()
{
int fact;
int n;
printf("\n Escribe un numero: ");

scanf("%d", &n);
fact=factorial(n);
printf("\n El factorial del numero es: %d \n", fact);
return 0;
}
