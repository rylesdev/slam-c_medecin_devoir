#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int choix;
    int i;
    int i, j, tmp;

    typedef struct patient{
    int id_patient;
    char nom_p[50];
    char prenom_p[50];
    char contact[100];
};

    typedef struct medecin{
    int id_medecin;
    char nom_m[50];
    char prenom_m[50];
    char specialite[50];
};

    typedef struct rdv{
    int id_rdv;
    char date[50];
    char horaire[50];
    char motif[50]
};

struct medecin tabM[10];
int nbM = 0;

do
{
    printf ("**** MENU **** \n");
    printf ("1 - Ajouter un medecin \n");
    printf ("2 - Modifier un medecin \n");
    printf ("3 - Consulter un medecin \n");
    printf ("4 - Supprimer un medecin \n");
    printf ("5 - Ajouter un patient \n");
    printf ("6 - Ajouter un rdv \n");
    printf ("0 - Quitter \n");
    scanf ("%d",&choix);

    switch (choix)


case 1 :
        struct medecin nouveauM;
        printf ("ID du medecin: \n");
        scanf ("%d",&nouveauM.id_medecin);
        printf ("Nom du medecin \n");
        scanf ("%s",&nouveauM.specialite);
        tabM[nbM] = nouveauM;
        nbM++;
break;


case 2 :
    {
        for (i = 0; i < 10; i ++)
        {
            printf ("ID: %d \n", tabM[i].id_medecin);
            printf ("Nom: %s \n", tabM[i].nom_m);
            printf ("Prenom: %s \n", tabM[i].prenom_m);
            printf ("Specialite: %s \n", tabM[i].specialite);
        }
    }
    break;

case 3 :
    {
        int id;
        int i = 0;
        bool trouve = false;

        printf ("Saisir l'id du medecin a rechercher:\n");
        scanf("%d",&id);

        while(trouve == false)
        {
            if (id == tabM[i].id_medecin)
            {
                trouvev = true;
            }
            else
            {
                i++;
            }
        }
        if (trouve == false)
            printf ("Medecin inexistant \n");
        else
        {
            printf ("ID: %d \n", tabM[i].id_medecin);
            printf ("Nom: %s \n", tabM[i].nom_m);
            printf ("Prenom: %s \n", tabM[i].prenom_m);
            printf ("Specialite: %s \n", tabM[i].specialite);
        }
    }
    break;


case 4 :

    int i, j, tmp;

    for (i = 0; i < 9; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (tabM[i]>tabM[j])
            {
                tmp = tabM[i];
                tabM[i] = tabM[j];
                tabM[j] = tmp;
            }
        }
    }
break;
}
