// Alejandro Esteban Castro Mendoza //
//20110316//
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<math.h>
#define pi 3.1416

int circulo(int radio)
{
	float ac;
	ac=pi*pow(radio,2);
	return ac;
}
float aro(float ras, float rm)
{
	float ao;
	ao=circulo(ras)-circulo(rm);
	return ao;
}
float cilindro(float rad, float altura)
{
	float resul;
	resul=circulo(rad)*altura;
	return resul;
}
int main()
{
	int opc;
		printf("Escoge la opcion que desea realizar: \n1.-Area de un Circulo \n2.-Area de un Aro \n3.-Area de un Cilindro \n4.-Salir\n");
		scanf("%d",&opc);
		
		switch (opc)
		{
			case 1:
			float radio,ac;
			printf("Escribe el radio del circulo:\n");
			scanf("%f", & radio);
			ac=circulo(radio);
			printf("El aro del circulo es: %.2f",ac);
			break;	
			
		case 2:
			float ras,rm,ao;
			printf("Escribe el radio mayor del aro\n");
			scanf("%f", &ras);
			printf("Escribe el radio menor del aro:\n");
			scanf("%f", &rm);
			ao=aro(ras, rm);
			printf("El area del aro es: %.2f", ao);
			break;
			
		case 3:
			
			float rad,altura,resul;
			printf("Escribre el radio del cilindro:\n");
			scanf("%f", &rad);
			printf("Escribe la altura del cilindro:\n");
			scanf("%f", &altura);
			resul=cilindro(rad, altura);
			printf("El volumen del cilindro es: %.2f", resul);
			break;	
		}
	return 0;

}
