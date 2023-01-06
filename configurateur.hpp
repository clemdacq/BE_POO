 #ifndef CONFIGURATEUR_H
#define CONFIGURATEUR_H
#include <string.h>

#include "moteur.hpp"
#include "chassis.hpp"
#include "voiture.hpp"


///////////////// CONFIGURATEUR ////////////////////

class configurateur {

private:

protected :
    char reponse;
	int cylindree;
	int option;
	int type;
	int energie;
	chassis *CH;
    moteur *MT;
    voiture *voit;

public :
    configurateur();
    voiture *config();
    voiture *display(voiture *voit);

};
#endif
