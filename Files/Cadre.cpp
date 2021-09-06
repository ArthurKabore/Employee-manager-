#include "Cadre.h"
#include <iostream>
using namespace std;

double Cadre::augmenter(double pourcentage)const{
				double valeurAugmentee;
				pourcentage/=100;
				valeurAugmentee=pourcentage*salaireAnnuel;
				return salaireAnnuel+valeurAugmentee;
		 }
		 
double Cadre::getSalaireHebdo()const{
	return salaireAnnuel/52;
}

std::ostream& operator<<(std::ostream& flux, const Cadre& p) {
	flux <<"Nom du Cadre: "<<*p.nom<<" \tSalaire Annuel: "<<p.salaireAnnuel<<"$";
	return flux;
} 

void Cadre::afficher() const{
	std::cout << *this << std::endl;
}
