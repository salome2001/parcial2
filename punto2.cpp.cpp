#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct estu{
	char nom[20];
	int edad;
	char doc[20];
	int sem;
}p;
using namespace std;
int main()
{
	char aux[10];
	system("cls");
	do{
		printf("Digite su nombre ");
		gets(p.nom);
	}while(strlen(p.nom)==0);
	do{
		printf("Digite su documento ");
		gets(p.doc);
	}while(strlen(p.doc)==0);
	do{
		printf("Digite su edad ");
		gets(aux);
	}while(strlen(aux)==0);
	p.edad=atoi(aux);
	do{
		printf("Digite el semestre ");
		gets(aux);
	}while(strlen(aux)==0);
	p.sem=atoi(aux);
	printf("\n\nLos datos almacenados son:\n\n");
	printf("\Nombres: %s con documento: %s tiene %d años y el semestre que cursa es %d",p.nom,p.doc, p.edad, p.sem);
	getch();
	return (0);
}


