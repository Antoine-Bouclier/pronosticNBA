#ifndef PRONO_H
# define PRONO_H

typedef struct
{
	char name[50];
}	Joueur;

typedef struct
{
	char nom[50];
	Joueur joueurs[15];
	int victoires;
	int défaites;
} Equipe;

#endif