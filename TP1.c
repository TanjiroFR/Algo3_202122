#include <stdio.h>

/**
 * Code Donovan PEREIRA DE REZENDE
**/
#define N 20

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

void ajouter(Client c, Tab t, int * nbClients) {
    
    if (t[nbClients] > t[N - 1])
    {

        return 0;
    }
    else {
        t[nbClients].nom = c.nom;
        nbClients = nbClients +1;
        return 1;
    }
    
}

int main(int argc, char **argv)
{
	printf("Algo3 2021-22 | TP1\n ");
    Client clicli;
    saisie(&clicli);

    Tab t;
    int *nbClients;
    ajouter(clicli,t,nbClients);

	return 0;
}