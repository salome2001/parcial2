#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	int num[10][10]	, numr[100], can[100];
	int F, C, n, cn, L, R=0;
	do{
		printf("\nDigite la cantidad de n datos maximo 10:  ");
		scanf("%d",&n);
	}while(n<1 || n>10);
	
	for(L=0 ; L<100; L++)
			can[L]=0;
	
	for(F=0 ; F<n ; F++)
		for(C=0 ; C<n ; C++)
		{
			printf("\nDigite en dato para la posicion [%d][%d]:  ",F+1, C+1);
			scanf("%d",&num[F][C]);
		}
	
	//recorremos los datos para ver cuantas veces esta
	for(F=0 , cn=0 ; F<n ; F++)
		for(C=0 ; C<n ; C++)
		{
		for(L=0 ; L<cn ; L++)
			if(num[F][C]==numr[L])
				break;
		if(L==cn)
			numr[cn++]=num[F][C];
		}
		
	for(L=0 ; L<cn ; L++)
	{
		for(F=0  ; F<n ; F++)
			for(C=0 ; C<n ; C++)
				if(numr[L]==num[F][C])
				{	
					can[L]=can[L]+1;			
				}
	}
	//mostramos los numero
	system("cls");
	for(F=0 ; F<n ; F++)
	{
		for(C=0 ; C<n ; C++)
			printf("%d  ",num[F][C]);
		printf("\n");
	}
	//cuantas veces esta cada numero
	
	for(L=0 ; L<cn ; L++)
		if(can[L]>1)
		   printf("\nel numero: %d esta: %d veces",numr[L],can[L]);
	
	getch();
	return (0);
}
