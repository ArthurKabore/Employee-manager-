#ifndef VENDEUR_H
#define VENDEUR_H

#include "Employe.h"
#include <iostream>
class Vendeur:public Employe{
	private:
		double tauxHorraire,nombreHeures,totalVentes;
		int nombreVentes;
	
	public:
	//constructeur
	Vendeur(const char*nom="",double _tauxHorraire=0.0,double _nombreHeures=0.0,int _nombreVentes=0):
	Employe(nom),
	tauxHorraire(_tauxHorraire),
	nombreHeures(_nombreHeures),
	nombreVentes(_nombreVentes){
	};
  
	//methodes
		double getSalaireHebdo()const;
		double augmenter(double pourcentage)const;
		//surcharge de l'operateur <<
		friend std::ostream& operator<<(std::ostream&, const Vendeur&);
		void afficher() const;
	
	//getters
		double getTauxHorraire(){return tauxHorraire;};
		double getNombreHeures(){return nombreHeures;};
		int getNombreVentes() {return nombreVentes;};
		const char* getNom(){ return *nom;};
	//setters
		void setTotalVentes(double tVentes){totalVentes=tVentes;};
		void setTauxHorraire(double tHorraire){tauxHorraire=tHorraire;};
		void setNombreHeures(double nHeures){nombreHeures=nHeures;};
		void setNombreVentes(int nVentes) {nombreVentes=nVentes;};
		void setNom(const char(newNom)[200]){*nom=newNom;};
};
#endif //VENDEUR_H
