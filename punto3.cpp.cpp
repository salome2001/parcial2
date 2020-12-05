#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int facto(int num);
using namespace std;
int main(void)
{
	int i,j=1,k=1; 
    int n, R, m, n1, sum; 
    int dato[20];
    do{
    	printf ("\n cuantos niveles quiere en el triangulo  ");
    	scanf("%d",&n);
	}while(n<1 || n>20);
	
    long int elemento;
    for (i = 0; i < n; i++)
    {
    	dato[i]=0;
        for (j = 1; j < n-i; j++)
            printf ("   ");
        for (k = 0; k <= i; k++)
        	{
			R = (facto(i))/(facto(k)*(facto(i-k)));
            printf ("%6d",R);
            dato[i] = dato[i]+R;
        	}
        printf ("\n");
    }

    for(i=0 ; i<n ; i++)
        printf("\nfila: %d suma= %d",i+1,dato[i]);
	do{
		printf("\ndigite el nivel inicial a partir de hacer la suma maximo %d   :",n-1);
		scanf("%d",&m);
	}while(m<0 || m>n-1);
	do{
		printf("\ndigite el nivel final de hacer la suma minimo: %d:   ", m);
		scanf("%d",&n1);
	}while(n1<m);
	
	for(i=m , sum=0 ; i<=n1 ; i++)
		sum = sum + dato[i];
	
	printf("\nla suma es: %d", sum);
	getch();
	return (0);
}

 
int facto(int num)
{
    int i=num;
    long long fact=1;
    for(i=num;i>1;i--)
    {
        fact*=i;
    }
    return fact;
}
