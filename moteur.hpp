 #ifndef MOTEUR_H
 #define MOTEUR_H
 #include <iostream>
 using namespace std;
 #include <math.h>
class moteur {
protected:
    float puissance, consommation, K, Q;
    int cylindree, prix_m, energie;
public:
    moteur();
    moteur(int cyl);
    virtual float calcul_consommation()=0;
    virtual float calcul_puissance()=0;
    int get_prix_m();
    int get_cylindree();
    float get_puissance();



};

class moteur_essence:public moteur{
public :
    moteur_essence(int cyl);
    float calcul_puissance();
    float calcul_consommation();
};
class moteur_diesel:public moteur{
public:
    moteur_diesel(int cyl);
    float calcul_puissance();
    float calcul_consommation();
};
class moteur_elec:public moteur{
public:
    moteur_elec();
    float calcul_puissance();
    float calcul_consommation();
};
class moteur_hybride:public moteur{
protected:
    moteur_essence* MEss;
    moteur_elec* MElec;
public:
    moteur_hybride();
    float calcul_puissance();
    float calcul_consommation();
};
#endif
