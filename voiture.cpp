
 #include <iostream>
 using namespace std;
 #include <math.h>
 #include "voiture.hpp"

voiture::voiture(){
    CH= new chassis->berline(0);
    MT= new moteur->moteur_essence(1800);
    v_Vmax=0;
    v_prix=25000;
}
voiture::voiture(chassis* CH, moteur* MT) {
        //init type (chassis) et energie (moteur)
        v_prix=25000;
        v_Vmax=0;
        v_moteur=MT;
        v_chass=CH;
}

voiture::get_Vmax(){
    v_Vmax=2*v_moteur->calcul_puissance()*(1-v_chass->calcul_coeff());
    return v_Vmax;
}
voiture::get_prix(){
    v_prix=v_prix+v_chass->get_prix()+v_moteur->get_prix_m();
    return v_prix;
}
voiture::get_puissance(){
    return v_moteur->calcul_puissance();
}
voiture::get_cylindree(){
    return v_moteur->get_cylindree();
}
voiture::get_option(){
    return v_chass->get_option();
}
