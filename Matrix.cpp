#include<stdio.h>
#include<conio.h>
void llenar_matriz (int x[] [20],int tam)
{
	int i,j;
	for (i=0; i<tam; i++)
	for (j=0; j<tam;j++)
	scanf ("%d",&x[i][j]);
}
void imprimir_matriz(int x[][20],int tam)
{
	int i,j;
	for (i=0;i<tam; i++)
	{
		for (j=0; j<tam;j++)
		printf("%d",x[i][j]);
		printf ("\n");
	}
}
void sum(int x[][20],int y[][20],int z[][20],int t)
{
	int i,j;
	for (i=0; i<t; i++)
	for (j=0; j<t; j++)
	z[i][j]=x[i][j]+y[i][j];
}
main()
{
	int t, a[20][20],b[20][20],c[20][20];
	printf ("Tamaño de la matriz: ");
	scanf ("%d",&t);
	printf("Dame los elementos de la matriz a: \n");
	llenar_matriz (a,t);
	printf("Dame los elementos de la matriz b: \n");
	llenar_matriz (b,t);
	sum (a,b,c,t);
	printf("La matriz a es: \n");
	imprimir_matriz (a,t);
	printf("La matriz b es: \n");
	imprimir_matriz(b,t);
	printf("\nLa suma es: \n");
	imprimir_matriz (c,t);
	getch();
	return 0;
}
