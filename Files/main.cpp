//Patrik Artur Kabore

#include <iostream>
#include <string>
using namespace std;

#include "Cadre.h"
#include "Vendeur.h"
#include "Vente.h"



int main() {
	double montantVente,commission,tauxH,nbH,totalVentes;
	int nbV;
	bool verifie;
	string nom;
	
	
	//Creation et test des classes dans l'ordre suivant (1.Vente 2.Cadre 3.Vendeur)
	
	//Classe Vente 
	cout<<"######## Toutes les m\202thodes pour la classe Vente et son op\202rateur << ##########\n";
	Vente*vente1=new Vente(); 
	
	cout<<"\n-Affichage d'un objet Vente vide:\n";
	cout<<*vente1<<"\n";
	
	cout<<"\n-Affichage de l'objet Vente avec constructeur:\n";
	Vente*vente2=new Vente(5,0.20);
	cout<<*vente2<<endl;
	
	cout<<"\n-Affichage d'un troisieme objet Vente avec inputs:\n";
	cout<<"Entrez le montant de la vente: ";
	cin>>montantVente;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de la vente: ";
	cin>>montantVente;
	}while(cin.fail());
	}
	cout<<"Entrez le montant de la commission: ";
	cin>>commission;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de la commission: ";
	cin>>commission;
	}while(cin.fail());
	}
	//creation de l'objet a partir des inputs
	Vente*vente3=new Vente(montantVente,commission);
	cout<<*vente3<<endl;
	
	//Test des Methodes de Vente
	cout<<"\n-M\202thode augmenter:\n";
	cout<<"Entrez le montant de commssion a augmenter: ";
	cin>>commission;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de commission a augmenter: ";
	cin>>commission;
	}while(cin.fail());
	}
	//methode augmenter
	vente3->augmenter(commission);
	cout<<*vente3<<endl;
	
	//methode afficher
	cout<<"\n-M\202thode afficher: \n";
	vente3->afficher();
	
	//Test des setters de Vente
	cout<<"\n-Test des setters:\n";
	cout<<"Entrez le montant de la vente: ";
	cin>>montantVente;
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de la vente: ";
	cin>>montantVente;
	}while(cin.fail());
	}
	cout<<"Entrez le montant de la commission: ";
	cin>>commission;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de la commission: ";
	cin>>commission;
	}while(cin.fail());
	}
	
	//setters
	vente3->setCommission(commission);
	vente3->setMontant(montantVente);
	cout<<*vente3<<endl;
	
	//Test des getters de Vente
	cout<<"\n-Test des getters:\n";
	cout<<"Numero de vente: "<<vente3->getNumeroVente()<<endl;
	cout<<"Montant: "<<vente3->getMontant()<<endl;
	cout<<"Commission: "<<vente3->getCommission()<<endl;
	
//====================================================================================================//	

	//Classe Cadre
	double salaireAnn,augmente;
	cout<<"\n######## Toutes les m\202thodes pour la classe Cadre et son op\202rateur << ##########\n";
	Cadre*cadre1=new Cadre(); 
	
	cout<<"\n-Affichage d'un objet Cadre vide:\n";
	cout<<*cadre1<<"\n";
	
	cout<<"\n-Affichage de l'objet Cadre avec constructeur:\n";
	Cadre*cadre2=new Cadre("Bob",2000.00);
	cout<<*cadre2<<endl;
	
	cout<<"\n-Affichage d'un troisieme objet Cadre avec inputs:\n";
	cout<<"Entrez le nom du Cadre: ";
	cin>>nom;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le du Cadre: ";
	cin>>nom;
	}while(cin.fail());
	}
	cout<<"Entrez le salaire annuel: ";
	cin>>salaireAnn;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le salaire annuel: ";
	cin>>salaireAnn;
	}while(cin.fail());
	}
	//string to const char*
	const char *nomChar = nom.c_str();
	
	Cadre*cadre3=new Cadre(nomChar,salaireAnn);
	cout<<*cadre3<<endl;
	
	//Test des Methodes de Cadre
	cout<<"\n-M\202thode augmenter:\n";
	cout<<"Entrez le pourcentage par lequel vous voulez augmentez le salaire annuel: ";
	cin>>augmente;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le pourcentage par lequel vous voulez augmentez le salaire annuel: ";
	cin>>augmente;
	}while(cin.fail());
	}
	//methode augmenter
	cadre3->setSalaireAnnuel(cadre3->augmenter(augmente)); 
	cout<<*cadre3<<endl;
	
	//methode getSalaireHebdo
	cout<<"\n-M\202thode getSalaireHebdo:\n";
	cout<<"Salaire Hebdo: "<<cadre3->getSalaireHebdo()<<"$\n";
	
	//methode afficher
	cout<<"\n-M\202thode afficher: \n";
	cadre3->afficher();
	
	//Test des setters de Cadre
	cout<<"\n-Test des setters:\n";
	cout<<"Entrez le nom du Cadre: ";
	cin>>nom;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le du Cadre: ";
	cin>>nom;
	}while(cin.fail());
	}
	nomChar = nom.c_str();
	cout<<"Entrez le salaire annuel: ";
	cin>>salaireAnn;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le salaire annuel: ";
	cin>>salaireAnn;
	}while(cin.fail());
	}
	
	//setters
	cadre3->setSalaireAnnuel(salaireAnn);
	cadre3->setNom(nomChar);
	cout<<*cadre3<<endl;
	
	//Test des getters de Cadre
	cout<<"\n-Test des getters:\n";
	cout<<"Nom du Cadre: "<<cadre3->getNom()<<"\n";
	cout<<"Salaire annuel: "<<cadre3->getSalaireAnnuel()<<"$\n";
	cout<<"Salaire Hebdo: "<<cadre3->getSalaireHebdo()<<"$\n";
	
//=====================================================================================================//	

	//Classe Vendeur
	cout<<"\n######## Toutes les m\202thodes pour la classe Vendeur et son op\202rateur << ##########\n";
	Vendeur*vendeur1=new Vendeur();
	cout<<*vendeur1<<"\n";
	
	cout<<"\n-Affichage de l'objet Vendeur avec constructeur:\n";
	Vendeur*vendeur2=new Vendeur("Guy",20.00,40,10);
	cout<<*vendeur2<<endl;
	
	cout<<"\n-Affichage d'un troisieme objet Vendeur avec inputs:\n";
	cout<<"Entrez le nom du Vendeur: ";
	cin>>nom;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nom du Vendeur: ";
	cin>>nom;
	}while(cin.fail());
	}
	cout<<"Entrez le taux horraire: ";
	cin>>tauxH;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le taux horraire: ";
	cin>>tauxH;
	}while(cin.fail());
	}
	cout<<"Entrez le nombre d'heures: ";
	cin>>nbH;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nombre d'heures: ";
		cin>>nbH;
	}while(cin.fail());
	}
	cout<<"Entrez le nombre de ventes: ";
	cin>>nbV;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nombre de ventes: ";
	cin>>nbV;
	}while(cin.fail());
	}
	
	nomChar = nom.c_str();
	Vendeur*vendeur3=new Vendeur(nomChar,tauxH,nbH,nbV);
	cout<<*vendeur3<<endl;
	
	//Test des Methodes de Vendeur
	
	//Methode getSalaireHebdo
	cout<<"\nEntrez les donn\202es pour les "<<nbV<<" ventes du Vendeur "<<vendeur3->getNom()<<" :\n";
	//population du tableau de ventes
	Vente *tableauVente[nbV];
	for(int i=0;i<nbV;i++){
		cout<<"Entrez le montant de la vente: ";
		cin>>montantVente;
		if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le montant de la vente: ";
	cin>>montantVente;
	}while(cin.fail());
	}
		cout<<"Entrez la commission de la vente: ";
		cin>>commission;
		if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez la commission de la vente: ";
	cin>>commission;
	}while(cin.fail());
	}
	
	tableauVente[i]=new Vente(montantVente,commission); //c++ supprime les tableaux par default
	}
	
	for(int i=0;i<nbV;i++)
	totalVentes+=tableauVente[i]->getMontant();
	
	vendeur3->setTotalVentes(totalVentes);

	cout<<"\nSalaire Hebdo du vendeur: "<<vendeur3->getSalaireHebdo()<<"$\n";
	
	//methode afficher
	cout<<"\n-M\202thode afficher: \n";
	vendeur3->afficher();
	
	//methode augmenter
	cout<<"\nEntrez le pourcentage pour augmenter le taux horraire du vendeur: ";
	cin>>tauxH;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le pourcentage pour augmenter le taux horraire du vendeur: ";
	cin>>tauxH;
	}while(cin.fail());
	}
	tauxH=vendeur3->augmenter(tauxH);
	vendeur3->setTauxHorraire(tauxH);
	cout<<"Vendeur apres la methode augmenter: \n"<<*vendeur3<<endl;
	
	//Test des setters de Vendeur
	cout<<"\n-Test des setters:\n";
	cout<<"Entrez le nom du Vendeur: ";
	cin>>nom;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nom du Vendeur: ";
	cin>>nom;
	}while(cin.fail());
	}
	cout<<"Entrez le taux horraire: ";
	cin>>tauxH;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le taux horraire: ";
	cin>>tauxH;
	}while(cin.fail());
	}
	cout<<"Entrez le nombre d'heures: ";
	cin>>nbH;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nombre d'heures: ";
		cin>>nbH;
	}while(cin.fail());
	}
	cout<<"Entrez le nombre de ventes: ";
	cin>>nbV;
	//verification
	if(cin.fail()){do{
		cout<<"Erreur!\n";
		cin.clear();
		cin.ignore(256,'\n');	
		cout<<"Entrez le nombre de ventes: ";
	cin>>nbV;
	}while(cin.fail());
	}
	nomChar = nom.c_str();
	
	//setters
	vendeur3->setNom(nomChar);
	vendeur3->setTauxHorraire(tauxH);
	vendeur3->setNombreHeures(nbH);
	vendeur3->setNombreVentes(nbV);
	cout<<*vendeur3<<endl;
	
	//Test des getters de Cadre
	cout<<"\n-Test des getters:\n";
	cout<<"Nom du Vendeur: "<<vendeur3->getNom()<<"\n";
	cout<<"Taux horraire: "<<vendeur3->getTauxHorraire()<<endl;
	cout<<"Nombre heures: "<<vendeur3->getNombreHeures()<<endl;
	cout<<"Nombre de ventes: "<<vendeur3->getNombreVentes()<<endl;
	
	//liberation des objets dans la memoire 
	delete vente1;
	delete vente2;
	delete vente3;
	delete cadre1;
	delete cadre2;
	delete cadre3;
	delete vendeur1;
	delete vendeur2;
	delete vendeur3;
	
	cout<<"\nFIN DU CODE\n";
	system("pause");
	return 0;
	}
