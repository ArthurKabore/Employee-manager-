#ifndef CADRE_H
#define CADRE_H
#include "Employe.h"
#include <iostream>
class Cadre:public Employe{
	private:
		double salaireAnnuel;
	
	public:
	//constructeur
	   Cadre(const char*nom="",double _salaireAnnuel=0.0):Employe(nom),salaireAnnuel(_salaireAnnuel){};

	
	//methodes
		double getSalaireHebdo()const;
		double augmenter(double pourcentage)const;
		//surcharge de l'operateur <<
		friend std::ostream& operator<<(std::ostream&, const Cadre&);
		void afficher() const;
	
	//getters
		double getSalaireAnnuel() const{return salaireAnnuel;};
		const char* getNom(){ return *nom;};
	
	//setters
		void setSalaireAnnuel(double salaire) {salaireAnnuel=salaire;};
		void setNom(const char (newNom)[200]){*nom=newNom;};
};
#endif // CADRE_H
