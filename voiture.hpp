  #ifndef VOITURE_H
 #define VOITURE_H
 #include <iostream>

 using namespace std;
 #include <math.h>
#include "chassis.hpp"
#include "moteur.hpp"
class voiture {
protected:
    chassis* CH;
    moteur* MT;
    float v_Vmax, v_prix;
public:
    voiture();
    voiture(chassis*, moteur*);
    //methode voiture//
    float get_Vmax();
    float get_prix();
    //methode moteur//
    float get_puissance();
    int get_cylindree();
    int get_energie ();
    //methode chassis//
    int get_option();
    int get_type();

};
#endif // VOITURE_H

