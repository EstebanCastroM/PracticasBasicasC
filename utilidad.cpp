// Alejandro Esteban Castro Mendoza //
//20110316//
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<math.h>
#include<conio.h>
struct articulo
{
	int cod,cant;
	char desc[20];
	float prec_com,prec_ven;
} tlap[500];

float utilidad(int a)
{
	int i;
	float util=0;
	for(i=0;i<a;i++)
	util=util+(tlap[i].prec_ven - tlap[i].prec_com)*tlap[i].cant;
	return util;
}
int cantidad_total (int a)
{
	int i, t_art=0;
	for(i=0;i<a;i++)
	t_art=t_art+tlap[i].cant;
	return t_art;
}
main()
{
	int a,i,t_art;
	float util;
	printf("Total de Articulos:\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Dame los datos:\n");
		printf("Codigo:\n");
		scanf("%d",&tlap[i].cod);
		printf("Descripcion:\n");
		fflush(stdin);
		gets(tlap[i].desc);
		printf("Precio de compra:\n");
		scanf("%f",&tlap[i].prec_com);
		printf("Cantidad en el inventario:\n");
		scanf("%d",&tlap[i].cant);
		tlap[i].prec_ven=tlap[i].prec_com*1.35;
	}
	printf("1.-Calcula la Utilidad de la Empresa\n");
	printf("2.-Calcula la Cantidad de Articulos en el Inentario\n");
	scanf("%d",&i);
	if (i==1)
	
	{
		util=utilidad(a);
		printf("La Utilidad de la Empresa seria: %.2f",util);
	}
	else
	{
		t_art=cantidad_total(a);
		printf("La Cantidad total en el Inventario es: %d", t_art);
	}
	getch();
	return 0;
}
