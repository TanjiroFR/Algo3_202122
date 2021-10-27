#include <stdio.h>

/**
 * Code Donovan PEREIRA DE REZENDE
**/
#define N 15

typedef char Chaine [15];
typedef struct
{
    Chaine nom[15];
    int ID_Client;
}Client;

typedef Client Tab[N];

void saisie(Client * c) {
    printf("Saisir le nom du client : ");
    scanf("%s",(*c).nom);
    printf("Saisir le l'ID du client : ");
    scanf("%d",&((*c).ID_Client));

    printf("Nom du client : %s | L'ID du client : %d",c->nom, c->ID_Client);
}

int main(int argc, char **argv)
{
	printf("Algo3 2021-22 / TP1\n ");
    Client c1;
    saisie(&c1);
	return 0;
}

