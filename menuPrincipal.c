#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Programa conversion.c
De la secundaria: Conversion de temperaturas
Para convertir Celsius a Farenheit se usa: °F= °C * 1.8 + 32
Para convertir Farenheit a Celsius se usa: °C= (°F-32)/1.8
Para convertir Celsius a Kelvin se usa: °K= °C + 273.15*/

void temperaturas(){ //Es el void que encierra a todo el programa para el case del menu principal
    
int opc; //El opc es el que se decarara mas adelante para poder elegir el programa

//Calcular Celcius a Farenheit    
 void farenheit() 
 { 
    float f1, c1; 
    printf("Escribe la temperatura en Celsius: "); 
    scanf("%f",&c1); 
    f1 = (c1*1.8+32); 
    printf("La temperatura en Farenheit es: %.2f\n",f1); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
  
 //Calcular Farenheit a Celsius 
 void celsius() 
 { 
    float f2, c2; 
    printf("Escribe la temperatura en Farenheit: "); 
    scanf("%f",&f2); 
    c2 = (f2-32/1.8); 
    printf("La temperatura en Celsius es: %.2f\n", c2); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
  
 //Calcular Celsius a Kelvin 
 void kelvin() 
 { 
    float c3, k1; 
    printf("Escribe la temperatura en Celsius: "); 
    scanf("%f",&c3); 
    k1 = (c3+273.15); 
    printf("La temperatura en Kelvin es: %.2f\n", k1); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
 
    printf("Bienvenido al programa Conversion de Temperaturas, por favor escribe el número de la opción que corresponda:"); //Leera el valor correspondiente
    printf("\n");
    printf("\n1. Conversion Celsius a Farenheit\n2. Conversion Farenheit a Celsius\n3. Conversion Celsius a Kelvin\n:");scanf("%i",&opc); //Se define un case para la eleccion del usuario

    switch(opc) //Seleccionara la opcion a escoger
    { 
        
        case 1:
        farenheit();
        break;
    
        case 2:
        celsius();
        break;


        case 3:
        kelvin();
        break;   
        
        default:
        printf("Error\nPor favor selecciona una opción valida\n"); //Se imprime un mensaje predeterminado en caso de escribir un numero no valido
}
}

/*Programa cuadrados.c
De la primaria: 
Area y perimetro del cuadrado, area de rectangulo y trapecio*/

void cuadrados (){ //Es el void que encierra a todo el programa para el case del menu principal
	int opc; //El opc es el que se decarara mas adelante para poder elegir el programa
//Calcular el area de un cuadrado
void areaCuadrado()
{
        float a, lado;
        printf("Escribe el tamaño del lado: ");
        scanf("%f",&lado);
        a = lado*lado;
        printf("El area del cuadrado es: %.2f\n", a); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}

//Calcular el perimetro de un cuadrado
void perimetroCuadrado()
{
        float p, lado2;
        printf("Escribe el valor del lado: ");
        scanf("%f",&lado2);
        p = lado2+lado2+lado2+lado2;
        printf("El perimetro mide: %.2f\n", p); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}

//Calcular el area de un rectangulo
void areaRectangulo()
{
        float r, base, alt;
        printf("Escribe el lado mayor (base): ");
        scanf("%f",&base);
        printf("Escribe el lado menor (altura): ");
        scanf("%f",&alt);
        r = base*alt;
        printf("El area del cuadrado es: %.2f\n", r); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}
//Calcular el area de un trapecio
void areaTrapecio()
{
        float t, baseMayor, baseMenor, alturaT;
        printf("Escribe la base mayor: ");
        scanf("%f",&baseMayor);
        printf("Escribe la base menor: ");
        scanf("%f",&baseMenor);
        printf("Escribe la altura: ");
        scanf("%f",&alturaT);
        t = (baseMayor+baseMenor/2)*alturaT;
        printf("El area del cuadrado es: %.2f\n", t); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}	
	
	printf("Bienvenido al programa Figuras Cuadraticas, por favor escribe el número de la opción que quieras:\n"); //Leera el valor correspondiente
	printf("\n1. Area de un cuadrado\n2. Perimetro de un cuadrado\n3. Area de un rectanulo\n4. Area de un trapecio\n:"); //Se define un case para la eleccion del usuario
	scanf("%i",&opc);

        switch(opc)
        {
                case 1: areaCuadrado();
                          break;
                case 2: perimetroCuadrado();
                          break;
                case 3: areaRectangulo();
                          break;
                case 4: areaTrapecio();
                          break;
		default:
			  printf("Error\nPor favor selecciona una opción valida\n"); //Se imprime un mensaje predeterminado en caso de escribir un numero no valido
        }
}

/*Programa de factoriales
De la preparatoria, realizar numeros factoriales (el limite sera el 13)*/

void factoriales() { //Es el void que encierra a todo el programa para el case del menu principal
	int opc; //El opc es el que se decarara mas adelante para poder elegir el programa
	int factorial(int n) 
	{
		int f;
		if (n==0) 
		{f=1;} //Quiere decir que si el numero que se esta multiplicando termina siendo igual a 0 el numero se multiplicara por 1 y finalizara su operacion
		else
		{f=n*factorial(n-1);} //El programa tomara el numero escrito por el usuario y lo multiplicara por uno menor a el
		return f;
	}

	int fact;
	int n;
	printf("Bienvenido al programa factorial, escribe un numero no mayor a 12: "); //Se muestra en pantalla la condicion de escribir un numerp igual o menor a 12
	scanf("%d", &n);
	if (n>=13)
	{printf("Oh oh, no puedo calcular este numero :( por favor intenta de nevo\n");} //Si se escribe un numero igual o mayor a 13 el programa finalizara
	else {
	fact=factorial(n);
	printf("\n El factorial del numero es: %d \n", fact);} //Si se escribe algo igual o menor a 12 el programa realizara su operacion correspondiente
}

/*Programa matrices1.c
De la universidad: Realizar sumas de matrices con un rango maximo de 10x10*/

void matrices1(){ //Es el void que encierra a todo el programa para el case del menu principal
	int opc; //El opc es el que se decarara mas adelante para poder elegir el programa	
	void matrizInicial(int mC,int a[][10], int b[][10]){ //se establece los limites en las coordenadas "i" y "j"
		
		for (int i=0; i<mC; i++) //Se denomina un ciclo for por los valores que son de tipo iteracion ya que cambiaran contantemente de acuerdo al tamaño de la matriz
		{
			for (int j=0; j<mC; j++)
			{
				printf("Introduce el valor del la coordenada [%i],[%i] en la matriz a: ",i, j);
				scanf ("%i", &a[i][j]); //Se escanearan todos los valores de la primera matriz
				printf("Introduce el valor del la coordenada [%i],[%i] en la matriz b: ",i, j);
				scanf ("%i", &b[i][j]); //SE escanearan los valores de la segunda matriz
			}
		}
	}
	void sumaMatriz(int mC,int a[][10], int b[][10], int c[][10]){
		for (int i=0; i<mC; i++){ //Se define un ciclo for para la iteracion de las filas
			for (int j=0; j<mC; j++){ //Se define un ciclo for para la iteracion de las columnas
				c[i][j] = a[i][j] + b[i][j]; //Se realiza una suma de columnas
			}
		}
	}
	int mC, a[10][10], b[10][10], c[10][10];
        printf ("Escribe la magnitud que quieres que tenga tu matriz cuadrada resultante: "); //Aqui se define el tamaño de ambas matrices para realizar la suma
        scanf ("%i", &mC);
        matrizInicial(mC,a,b);
        sumaMatriz(mC, a, b, c);
        for(int i=0; i<mC; i++){
                for(int j=0; j<mC; j++){
                        printf ("%i\t", c[i][j]); //Muestra el resultado de la suma de columnas
                }
                printf("\n");
        }
}

/* Programa matrices2
para que funcione debe tener el mismo tamaño de columnas,
de lo contrario fallara*/
		int opc;
	#define N 10
	#define M 10 //Se establecen los limites de las coordenadas
	void leer_matriz(int A[N][M], int F, int C)
	{
		int i,j; 
		for(i=0;i<F;i++) //Se define un ciclo for para la iteracion de las filas
		{
			for (j = 0;j<C;j++) //Se define un ciclo for para la iteracion de las columnas
			{
				printf("Escribe el valor de [%d][%d]\n",i,j );
				scanf("%d",&A[i][j]); //Escanea los valores correspondientes
			}
		}
	}
	void imprimir_matriz(int A[N][M],int F,int C)
	{
		int i,j;
		for(i=0;i<F;i++) //Se define un ciclo for para la iteracion de las filas
		{
			for (j = 0; j<C; j++) //Se define un ciclo for para la iteracion de las columnas
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
	}
	void multiplicar(int A[N][M],int B[N][M],int Re[N][M],int f1,int cf,int c2)
	{
		int i,j,k; //Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
		for(i=0;i<f1;i++) //Se define un ciclo for para la iteracion de las filas
		{
			for (j = 0; j<c2; j++) //Se define un ciclo for para la iteracion de las columnas
			{
				Re[i][j]=0;
			}
		}
		for(i=0;i<f1;i++) //Se define un ciclo for para la iteracion de las filas
		{
			for (j = 0; j<cf; j++) //Se define un ciclo for para la iteracion de las columnas
			{
				for (k = 0; k < c2; k++)
				{
					Re[i][k]= Re[i][k]+A[i][j]*B[j][k];
				}
			}
		}
	}
	int  multiplicacion ()
	{
		int F,C,P, i,j; //Fila, Columna, columna de segunda matriz, posicion i y posicion j
		int mat1[N][M],mat2[N][M]; //Matriz 1 y matriz 2
		int matR[N][M]; //matriz que sera el resultado de las multiplicaciones
		printf("Primer matriz\n");
		printf("Escribe el numero de filas que deseas\n");
		scanf("%d",&F); // EScanea el numero de filas deseadas
        	printf("Escribe el numero de columnas que deseas\n");
        	scanf("%d",&C); //EScanea el numero de columnas deseadas
        	leer_matriz(mat1,F,C);
        	printf("Segunda matriz\n");
        	printf("Recuerda que para una multiplicación de matrices, las filas de la segunda matriz deben tener el mismo tamaño que las columnas de la primera matriz\n");
        	printf("Escribe el numero de las columnas\n"); //Debe leer forsozamente el mismo numero que fue escrito en las filas de la primera matriz
        	scanf("%d",&P);
        	leer_matriz(mat2,C,P);
        	multiplicar(mat1,mat2,matR,F,C,P);
        	printf("La matriz uno es:\n");
        	imprimir_matriz(mat1,F,C);
        	printf("La matriz dos es: \n");
        	imprimir_matriz(mat2,C,P);
        	printf("Es resultado de la multiplicación es\n");
        	imprimir_matriz(matR,F,P);
return  0;
}
/*Programa Matrices 3, matriz transpuesta
 Lo que se vio en universidad, realizar una matriz transpuesta cuadrada*/

#define MAX 10
int transpuesta()
{
	int opc;
        int matriz[MAX][MAX], col, fila, i=0, j=0;
        printf("Escribe cuantas filas quieres: ");
        scanf("%d", &fila); //Escaneara las filas solicitadas
        printf("Escribe cuantas columnas quieres: ");
        scanf("%d", &col); //Escaneara las columnas solicitadas
        for(i = 0;i < fila;i++)
        {
                for(j = 0;j < col;j++) {
                        printf("Escribe los valores de la posicion [%d][%d]==>\t", i+1, j+1);
                        scanf("%d", &matriz[i][j]);
                }
        }

        printf("\n\n\tMatriz original"); //Imprime los datos de la matriz declarada
        printf("\n");
        for(i = 0;i < fila;i++){
                printf("\n");
        for(j = 0;j < col;j++){
                printf(" %6d ", matriz[i][j]);
                } }

        printf("\n\n\tMatriz transpuesta"); //Imprime la matriz transpuesta
        printf("\n");
        for(i = 0;i < col;i++){
                printf("\n");
        for(j = 0;j < fila;j++){
                printf(" %6d ", matriz[j][i]);
                } }

printf("\n\n\n");
return 0;
}


/* Programa Salario
Consiste en ingresar cuántas horas trabajas y cuánto ganas la hora,
si tu salario sale menor a $10,000 recibes un bono del 5% sobre ello*/

void salario() {
	int opc;

        int hora, sueldo;
        float s;
        float s1, s2, s3, s4;
        printf("BIenvenido al programa Salario\nEscribe cuantas horas trabajas al dia: ");
        scanf("%d",&hora);
        printf("Escribe cuanto ganas por hora: ");
        scanf("%d",&sueldo);
        s = (hora*sueldo)*.16+s-(s*.12);
        s1 = (hora*sueldo);
        s2 = s1+(s1*.16);
        s3 = s2-(s2*.12);
        if (s3<10000) {
                s4= s3+(s3*.05);
                printf("Felicidades, tu salario con bono es: %.2f\n",s4); }
        else  printf("Tu salario es: %.2f\n",s3);
}

/*Programa triangulo.c
De la primaria: Teorema de Pitagoras
La suma de cada cateto al cuadrado es igual a la hipotenusa al cuadrado
Triangulo rectandulo: un angulo de 90°*/

void triangulo () {
	int opc;
//Calcular la hipotenusa
void hipotenusa()
{
        float co, ca, h;
        printf("Escribe la longitud del cateto adyacente: ");
        scanf("%f",&co);
        printf("Escribe la longitud del cateto opuesto: ");
        scanf("%f",&ca);
        h = (co*co+ca*ca);
        printf("La hipotenusa mide: %.2f\n",h); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}

//Calcular el area
void area()
{
        float base, alt, a;
        printf("Escribe la base: ");
        scanf("%f",&base);
        printf("Escribe la altura: ");
        scanf("%f",&alt);
        a = base*alt/2;
        printf("El area del triangulo es: %.2f\n", a); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}

//Calcular el tercer angulo
void angulo()
{
        float a1,a2,a3;
        printf("Escribe el valor de los 2 angulos: ");
        scanf("%f%f",&a1,&a2);
        a3 = 180-(a1+a2);
        printf("El tercer angulo mide: %.2f\n", a3); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
}

        printf("Bienvenido al programa Figuras Triangulares, por favor escribe el número de la opción que quieras:\n"); //Leera el valor correspondiente
        printf("\n1. Calcular la hipotenusa\n2. Calcular el area del triangulo\n3. Calcular el angulo restante de un triangulo\n:"); //Se define un case para la eleccion del usuario
        scanf("%i",&opc);

        switch(opc)
        {
                case 1: hipotenusa();
                         break;
                case 2: area();
                         break;
                case 3: angulo();
                         break;
                default: printf("Error, por favor intente de nuevo\n");
                         break;
        }
}



int main(){ //Main principal donde coloco todos los 'case' en función

char opc; //Se define de tipo caracter para la eleccion de cada caso
    
    printf("Bienvenido a Programación Modular, elige un programa a tu eleccion: \n");
    printf("a) Conversion de temperaturas\n");
    printf("b) Figuras cuadraticas\n");
    printf("c) Factoriales\n");
    printf("d) Suma de matrices\ne) Multiplicacion de matrices\nf) Matrices Transpuestas\n");
    printf("g) Salario\n");
    printf("h) Figuras triangulares\n");
    scanf("%c",&opc);
    printf("\n:");
   int x;
    switch (opc){
        
        case 'a':
        temperaturas();
        break;
	case 'b':
        cuadrados();
        break;
	case 'c':
        factoriales();
        break;
	case 'd':
        matrices1();
	break;
	case 'e':
	x=multiplicacion();
        break;
	case 'f':
	x=transpuesta();
	break;
	case 'g':
        salario();
        break;
	case 'h':
        triangulo();
        break;

        default: printf("Error, por favor intente de nuevo\n");
    }
    return 0;
 }
