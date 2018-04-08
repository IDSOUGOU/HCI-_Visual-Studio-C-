#ifndef BANDITIHM_H
#define BANDITIHM_H

#include "Combinaison.h"
class Bandit;

class BanditIHM
{
private:
    Bandit* ptr;
    
public:
   	//  Initialise l'instance à partir du contenu des fichiers de données contenant respectivement les symboles permettant de générer une Combinaison aléatoire et toutes les Combinaisons gagnantes.
    BanditIHM(const char* nomFichierSymb,const char* nomFichierComb);
    
    // Destructeur
    ~BanditIHM();
	
    //  Initialise l'instance à partir du contenu des fichiers de données contenant respectivement les symboles permettant de générer une Combinaison aléatoire et toutes les Combinaisons gagnantes.
    void charger(const char* nomFichierSymb,const char* nomFichierComb);
    
    //  Modifie resultat en tirant ses symboles aléatoirement. Compare  resultat à toutes les Combinaisons gagnantes. Retourne la mise multipliée par le rapport de la Combinaison gagnante correspondante, ou 0 si resultat n'est pas gagnante. Si l'instance courante n'est pas initialisée correctement: réinitialise resultat comme Combinaison vide et retourne la mise.
    int jouer(unsigned int mise,Combinaison& resultat) const;
	
    //  Retourne l'adresse du premier element du tableau contenant les symboles utilisés pour générer les Combinaisons aléatoires, et copie dans nbSymboles le nombre d'éléments du tableau. Si l'instance courante n'est pas initialisée correctement: retourne  NULL et met nbSymboles à 0.
    const int* obtenirSymboles(unsigned int& nbSymboles) const;
    
    //  Retourne l'adresse du premier element du tableau contenant toutes les Combinaisons gagnantes, et copie dans nbCombinaisons le nombre d'éléments du tableau. Si l'instance courante n'est pas initialisée correctement: retourne  NULL et met nbCombinaisons à 0.
    const Combinaison* obtenirCombinaisonsGagnantes(unsigned int& nbCombinaisons) const;
};

#endif


