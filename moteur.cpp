 #include <iostream>
 using namespace std;
 #include <math.h>


 #include "moteur.hpp"
 #include "voiture.hpp"
 #include "chassis.hpp"

 moteur::moteur() {

 Q=0.055;
 puissance=0;
 consommation=0;
 prix_m=0;

 }

 moteur_essence::moteur_essence(int cyl){
    K=0.07;
    cylindree=cyl;
    energie = 1;
 }

  moteur_diesel::moteur_diesel(int cyl){
    prix_m=2000;
    K=0.06;
    cylindree=cyl;
    energie = 2;

 }
  moteur_elec::moteur_elec(){
    prix_m=3000;
    cylindree=0;
    energie = 3;
 }
moteur_hybride::moteur_hybride(){
prix_m=3000;
MEss= new moteur_essence(1800);
MElec= new moteur_elec();
energie = 4;
}

///////////Moteur essence///////
float moteur_essence::calcul_puissance(){
    puissance=K*cylindree;
    return puissance;
}

float moteur_essence::calcul_consommation(){
    consommation = Q*this->calcul_puissance();
    return consommation;
}
// MOTEUR DIESEL


float moteur_diesel::calcul_puissance()  {
	puissance=K*cylindree;
	return puissance;
}

float moteur_diesel::calcul_consommation()  {
	consommation=Q*this->calcul_puissance() /(log10(puissance/6));
	return consommation;
}


// MOTEUR ELEC

float moteur_elec::calcul_puissance()  {
	puissance=95;
	return puissance;
}

float moteur_elec::calcul_consommation()  {
	consommation=0;
	return consommation;
}



// MOTEUR HYBRIDE

float moteur_hybride::calcul_puissance()  {
	puissance=MEss->calcul_puissance()+MElec->calcul_puissance();
	return puissance;
}

float moteur_hybride::calcul_consommation()  {
	consommation=MEss->calcul_consommation();
	return consommation;
}


// GET

 float moteur::get_puissance(){
    puissance=this->calcul_puissance();
    return puissance;
}

int moteur::get_prix_m(){
    if (cylindree==2200 )   prix_m+=1000;
    return prix_m;
}


int moteur::get_cylindree(){
    return cylindree;
}


