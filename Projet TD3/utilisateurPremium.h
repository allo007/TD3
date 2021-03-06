/********************************************
* Titre: Travail pratique #3 - utilisateurPremium.h
* Date : 22 octobre 2018
* Auteurs: Raphael Geoffrion et Jules Lefebvre
*******************************************/

#ifndef UTILISATEUR_PREMIUM_H
#define UTILISATEUR_PREMIUM_H

#include "utilisateur.h"


class UtilisateurPremium : public Utilisateur {
public :

	//constructeurs 
	UtilisateurPremium(const string& nom= "", unsigned int joursRestants = JOURS_RESTANTS_INITIAL, double taux = TAUX_INITIAL_PREMIUM);
	UtilisateurPremium(const Utilisateur& utilisateur); 


	//getters
	unsigned int getJoursRestants() const; 
	double getTaux() const; 

	//setters 
	void setJoursRestants(unsigned int joursRestants); 

	//methode de calcul 
	void calculerTaux(); 

	//operateurs
	UtilisateurPremium& operator= (Utilisateur* utilisateur); 

	friend ostream& operator << (ostream& os, const UtilisateurPremium& utilisateur); 

private : 
	unsigned int joursRestants_; 
	double taux_; 
};

#endif 
