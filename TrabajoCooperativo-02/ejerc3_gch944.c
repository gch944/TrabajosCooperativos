#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define densidad 7.86
#define pi 3.14

int main(){
		char c;
		float a;       /* radio de la base superior   */
		float b;          /* radio de la base inferior */
		float altura;        /* altura  */
		float masa;           /* masa en kg               */
        float volumen;       /* volumen del tronco */

        		printf("CALCULO DE LA MASA DE UN TRONCO DE CONO CIRCULAR RECTO\n");
		printf("========================================\n\n");
		printf("Introduzca el radio de la base superior (cm): ");
        scanf(" %f", &a);
        printf("Introduzca el radio de la base inferior (cm): ");
        scanf(" %f", &b);
        printf("Introduzca la altura del tronco (cm): ");
        scanf(" %f", &altura);

        volumen=pi*altura*(pow(a,2)+a*b+pow(b,2))/3;
        	
masa=densidad*volumen;
printf("\nmasa: %.2f Kg", masa);