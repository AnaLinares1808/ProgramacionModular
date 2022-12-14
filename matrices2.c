/* Programa matrices2
para que funcione debe tener el mismo tamaño de columnas,
de lo contrario fallara*/

#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 10
void leer_matriz(int A[N][M], int F, int C);
void imprimir_matriz(int A[N][M],int F,int C);
void multiplicar(int A[N][M],int B[N][M],int Re[N][M],int f1,int cf,int c2);


void leer_matriz(int A[N][M], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{ for (j = 0;j<C;j++)
		{ printf("Escribe el valor de [%d][%d]\n",i,j );
			scanf("%d",&A[i][j]); }
	}
}
void imprimir_matriz(int A[N][M],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}

void multiplicar(int A[N][M],int B[N][M],int Re[N][M],int f1,int cf,int c2)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<f1;i++)
	{ for (j = 0; j < c2; j++)
		{ Re[i][j]=0; }
	}

	for(i=0;i<f1;i++)
	{ for (j = 0; j<cf; j++)
		{ for (k = 0; k < c2; k++)
				{ Re[i][k]= Re[i][k]+A[i][j]*B[j][k]; }	
   }
	}
}

int main(int argc, char *argv[]) {
	int F,C,L,P, i,j;
	int mac1[N][M],mac2[N][M];
	int macR[N][M];
	printf("Primer matriz\n");
	printf("Escribe el numero de filas que deseas\n");
	scanf("%d",&F);
	printf("Escribe el numero de columnas que deseas\n");
	scanf("%d",&C);
	leer_matriz(mac1,F,C);
	printf("Segunda matriz\n");
	printf("Recuerda que para una multiplicación de matrices, las filas de la segunda matriz deben tener el mismo tamaño que las columnas de la primera matriz\n");
	printf("Escribe el numero de las columnas\n");
	scanf("%d",&P);
	leer_matriz(mac2,C,P);
	multiplicar(mac1,mac2,macR,F,C,P);
	printf("La matriz uno es:\n");
	imprimir_matriz(mac1,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(mac2,C,P);
	printf("Es resultado de la multiplicación es\n");
	imprimir_matriz(macR,F,P);
	return 0;
}
