//Menu principal
 #include <stdio.h> 
 #include <math.h> 

/*Programa conversio.c 
 De la secundaria: Conversion de temperaturas 
 Para convertir Celsius a Farenheit se usa: °F= °C * 1.8 + 32 
 Para convertir Farenheit a Celsius se usa: °C= (°F-32)/1.8 
 Para convertir Celsius a Kelvin se usa: °K= °C + 273.15*/ 
  
 //Calcular Celcius a Farenheit 
 void farenheit() 
 { 
         float f1, c1; 
         printf("Escribe la temperatura en Celsius: "); 
         scanf("%f",&c1); 
         f1 = sqrt(c1*1.8+32); 
         printf("La temperatura en Farenheit es: %.2f\n",f1); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
  
 //Calcular Farenheit a Celsius 
 void celsius() 
 { 
         float f2, c2; 
         printf("Escribe la temperatura en Farenheit: "); 
         scanf("%f",&f2); 
         c2 = (f2-32)/1.8; 
         printf("La temperatura en Celsius es: %.2f\n", c2); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
  
 //Calcular Celsius a Kelvin 
 void kelvin() 
 { 
         float c3, k1; 
         printf("Escribe la temperatura en Celsius: "); 
         scanf("%f",&c3); 
         k1 = c3+273.15; 
         printf("La temperatura en Kelvin es: %.2f\n", k1); //Coloco ".2" antes del "f" y después de "n" para minimizar las decimales en los resultados
 } 
  
  
 int conversion() 
 { 
         char opc1; 
         printf("Elige la conversion que quieres realizar:\n");
         printf("a) Conversion Celsius a Farenheit\n"); 
         printf("b) Conversion Farenheit a Celsius\n"); 
         printf("c) Conversion Celsius a Kelvin\n");  
         scanf("%c",&opc1); 
  
         switch(opc1) 
         { 
                 case 'a': farenheit(); 
                           break; 
                 case 'b': celsius(); 
                           break; 
                 case 'c': kelvin(); 
                           break; 
                 default: printf("Error, por favor intente de nuevo\n"); 
                           break;
         } 
         return 0; 
 }


int main() //Main principal donde coloco todos los 'case' en función
 { 
         char opc; 
         printf("Bienvenido a Programación Modular, elige un programa a tu eleccion: \n"); 
         printf("a) Conversion de temperaturas\n"); 
         scanf("%c",&opc); 
  
         switch(opc) 
         { 
                 case 'a': conversion(); 
                            break;
                default: printf("Error, por favor intente de nuevo\n"); 
                            break;
         } 
         return 0; 
 }
