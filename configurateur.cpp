#include <iostream>
using namespace std;
#include <math.h>


//********* Definition des classes

#include "voiture.hpp"
#include "chassis.hpp"
#include "moteur.hpp"
#include "configurateur.hpp"


configurateur::configurateur() {
        cout << "Bienvenue dans le configurateur! \n";

}

voiture* configurateur::config()  {
cout << "*** Debut selection des modeles ***"<< endl;

        //param�trage chassis
    cout << "Type? (1-Berline ; 2-4x4 ; 3-Break ; 4-Coupe)" ; cin>>type; cout<<endl;
    cout << "Option? (1-Standard ; 2-Luxe) " ; cin>>option; cout<<endl;
    if (type==1){CH=new berline(option);}
    else if (type==2){CH=new Ber_4x4(option);}
    else if (type==3){CH=new Ber_Break(option);}
    else if (type==4){CH=new coupe(option);}
    else {cout<<"erreur"<<endl;};

    // parametrage moteur

    cout << "Energie? (1-Essence ; 2-Diesel; 3-Electrique ; 4-Hybride)" ; cin>>energie; cout<<endl;

    if ((energie==1) || (energie==2)) {
    cout << "Cylindree? (1800/2200)" ; cin>>cylindree; cout<<endl;
        if (energie==1){MT=new moteur_essence(cylindree);}
        else if (energie==2){MT=new moteur_diesel(cylindree);}}
        else if (energie==4){MT=new moteur_hybride();}
        else if (energie==3){MT=new moteur_elec();}


voit=new voiture(CH,MT);

	return voit;
}

voiture* configurateur::display(voiture *voit)  {
    if (type==1) cout << "BERLINE        "<<endl;
    else if (type==2) cout << "BERLINE_4x4    "<<endl;
    else if (type==3) cout << "BERLINE_BREAK  "<<endl;
    else if (type==4) cout << "COUPE          "<<endl;

    if (option==1) cout << "STRD  "<<endl;
    else if (option==2) cout << "LUXE  "<<endl;

    if (cylindree==1800) cout << "C1800  "<<endl;
    else if (cylindree==2200) cout << "C2200  "<<endl;
    else cout << "*****  ";

    if (energie==1) cout << "ESS  "<<endl;
    else if (energie==2) cout << "HDI  "<<endl;
    else if (energie==3) cout << "ELC  "<<endl;
    else if (energie==4) cout << "HYB  "<<endl;

    cout<< voit->get_puissance()<<"  "<<endl;
    cout<< voit->get_Vmax()<<"  "<<endl;
    cout << voit->get_prix()<<endl;
}

