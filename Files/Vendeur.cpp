#include "Vendeur.h"
#include <cstring>
#include <iostream>

using namespace std;

double Vendeur::getSalaireHebdo()const{
	return tauxHorraire*nombreHeures+Vendeur::totalVentes;
}

double Vendeur::augmenter(double pourcentage)const{
				double valeurAugmentee;
				pourcentage/=100;
				valeurAugmentee=pourcentage*tauxHorraire;
				return tauxHorraire+valeurAugmentee;
}

std::ostream& operator<<(std::ostream& flux, const Vendeur& p) {
	flux <<"Nom du vendeur: "<<*p.nom <<"\tTaux horraire: "<<p.tauxHorraire<<"\tNombre d'heures: "
	<<p.nombreHeures<<"\tNombre de Ventes: "<<p.nombreVentes;
	return flux;
} 

void Vendeur::afficher()const{
	std::cout << *this << std::endl;
}
