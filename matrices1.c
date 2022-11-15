#include <stdio.h>

void matrizcoe(int t,int a[][10], int b[][10]){

for (int i=0; i<t; i++){

for (int j=0; j<t; j++){

printf("Introduce el valor del la coordenada [%i],[%i] en la matriz a: ",i, j);
scanf ("%i", &a[i][j]);
printf("Introduce el valor del la coordenada [%i],[%i] en la matriz b: ",i, j);
scanf ("%i", &b[i][j]);

}


}

}

void sumacoe(int t,int a[][10], int b[][10], int c[][10]){


for (int i=0; i<t; i++){

for (int j=0; j<t; j++){

c[i][j] = a[i][j] + b[i][j]; 



}

}

}






int main(){

int t, a[10][10], b[10][10], c[10][10];
printf ("De que magnitud querras tu matriz cuadrada resultante");
scanf ("%i", &t);
matrizcoe(t,a,b);
sumacoe(t, a, b, c);
for(int i=0; i<t; i++){

for(int j=0; j<t; j++){

printf ("%i\t", c[i][j]);
}
printf("\n");
}
return 0;
}

