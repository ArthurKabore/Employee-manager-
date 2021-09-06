#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <cstring>
using namespace std;

//classe abstraite
class Employe{
	protected:
		const char*nom[200];
	
	public:	
		//Constructeur
		Employe(const char*_nom){*nom=_nom;};
		
		//Methodes 
		virtual double getSalaireHebdo() const=0;
		virtual double augmenter(double pourcentage)const=0;
		virtual void afficher()const=0; 
		
		//getter 
		virtual const char* getNom(){ return *nom;};
		
		//setter
		virtual void setNom(const char (newNom)[200]){*nom=newNom;};
		
};
#endif

