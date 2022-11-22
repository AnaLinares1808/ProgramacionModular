

#include <stdio.h>
#include <math.h>

void salario()
{
	int hora, sueldo;
	float s;
	printf("Escribe cuantas horas trabajas al dia: ");
	scanf("%d",&hora);
	printf("Escribe cuanto ganas por hora: ");
        scanf("%d",&sueldo);
	s = (hora*sueldo)*.16+s-(s*.12);
	printf("Tu salario es: %f\n",s);
}
