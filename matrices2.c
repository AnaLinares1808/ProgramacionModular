/* Programa matrices 2
 realizar una segunda matriz en donde multiplica columnas de 2*2 */

#include <stdio.h>

void matriz (int t, int a[][10],int b[][10])
{
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<t;j++)
		{
			printf("Escribe el valor de la matriz A (%d,%d): ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	for (int i=0;i<t;i++)
	{
		for (int j=0;j<t;j++)
		{
			printf("Escribe el valor de la matriz B [%d],[%d]: ",i+1,j+1);
			scanf("%d",&b[i][j]);

		}
	}
}

void multiplicacionMatriz (int t, int a[][10],int b[][10],int c[][10])
{
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<t;j++)
		{
			c[i][j]=(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
			printf("%i\t", c[i][j]);
			printf("\n");
		}
	}
}

int main ()
{
	int t, a[10][10], b[10][10], c[10][10];
		printf("Escribe el tamaño de la matriz: ");
		scanf("%d",&t);
		matriz(t,a,b);
		multiplicacionMatriz(t,a,b,c);
				return 0;
}
