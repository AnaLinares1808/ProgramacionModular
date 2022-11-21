/*Programa Matrices 3, matriz transpuesta
 Lo que se vio en universidad, realizar una matriz transpuesta
 de 3x3 */

#include<stdio.h>
#define MAX 10
int main(int argc, char** args)
{
	int matriz[MAX][MAX], col, reng, i=0, j=0;
	printf("Escribe cuantas columnas quieres: ");
	scanf("%d", &col);
	printf("Escribe cuantos renglones quieres: ");
	scanf("%d", &reng);
	for(i = 0;i < reng;i++) //Aqui se leen los datos
	{
		for(j = 0;j < col;j++) {
			printf("Escribe los valores [%d][%d]==>\t", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n\n\tMatriz original"); //Imprime los datos de la matriz declarada
	printf("\n");
	for(i = 0;i < reng;i++){
		printf("\n");
	for(j = 0;j < col;j++){
		printf(" %6d ", matriz[i][j]);
		} }

	printf("\n\n\tMatriz transpuesta"); //Imprime la matriz transpuesta
	printf("\n");
	for(i = 0;i < col;i++){
		printf("\n");
	for(j = 0;j < reng;j++){
		printf(" %6d ", matriz[j][i]);
		} }

printf("\n\n\n");
}
