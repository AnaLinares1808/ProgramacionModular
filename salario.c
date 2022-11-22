/* Programa Salario
Consiste en ingresar cuántas horas trabajas y cuánto ganas la hora,
si tu salario sale menor a $10,000 recibes un bono del 5% sobre ello*/

#include <stdio.h>
#include <math.h>

int main()
{
	int hora, sueldo;
	float s1, s2, s3, s4;
	printf("Escribe cuantas horas trabajas al dia: ");
	scanf("%d",&hora);
	printf("Escribe cuanto ganas por hora: ");
        scanf("%d",&sueldo);
	s1 = (hora*sueldo);
s2 = s1+(s1*.16);
s3 = s2-(s2*.12);
if (s3<10000)
{
s4= s3+(s3*.05);
printf("Felicidades, tu salario con bono es: %.2f\n",s4);
}
else  printf("Tu salario es: %.2f\n",s3);

}
