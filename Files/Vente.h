#ifndef VENTE_H
#define VENTE_H

#include <iostream>
using namespace std;

class Vente{
	private:
		int numero;
		static int current_num; //variable pour l'auto incrementation de la variable numero. 
		double montant,commission;
	
	public:
		//constructeur&copieur
		Vente(double montant=0.0,double commission=0.0):numero(++current_num),montant(montant),commission(commission){};
		Vente( const Vente &obj);  
                  

		//methodes			
		double augmenter (double pourcentage){return commission+=pourcentage;}
		void afficher()const{ cout << "Numero de la vente: "<< numero << "\tMontant: " << montant << "\tCommission: " << commission << endl;}
		friend std::ostream& operator<<(std::ostream&, const Vente&);

		//getters
		const double getCommission()const { return commission;};
		const double getMontant()const { return montant;};
		const int getNumeroVente()const { return numero;};
		
		//setters
		const void setCommission(double setCommission) {commission=setCommission;};
		const void setMontant(double setMontant) { montant=setMontant;};
	
		
};
int Vente::current_num; 

std::ostream& operator<<(std::ostream& flux, const Vente& p) {
	flux <<"Numero de la vente: "<< p.numero<<"\tMontant: "<<p.montant<<"\tCommission: "<<p.commission;
	return flux;
} 
#endif // VENTE_H
