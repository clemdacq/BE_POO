#include <iostream>
using namespace std;
#include <math.h>


#include "moteur.hpp"
#include "voiture.hpp"
#include "chassis.hpp"

chassis::chassis(){
    m_prix=0;
    R=0.03;

}

berline::berline(int option){
    m_l = 2.2;
    m_L1=4.6;
    m_L2=2;
    m_h=1.4;
    m_prix=0;
    type = 1;

}
coupe::coupe(int option){
    m_l = 2.2;
    m_L1=4.6;
    m_L2=0;
    m_h=1.3;
    m_prix=2000;
    type = 2;


}
Ber_4x4::Ber_4x4(int option){
    m_l = 2.5;
    m_L1=4.6;
    m_L2=0;
    m_h=1.3;
    m_prix=3000;
    type = 3;

}

Ber_Break::Ber_Break(int option){
    m_l = 2.2;
    m_L1=4.6;
    m_L2=3.2;
    m_h=1.3;
    m_prix=1000;
    type = 4;

}
/////////////////////////BERLINE/////////////////////////


float berline::calcul_coeff(){
    m_Cx=R*((m_L1-(m_h/2)+m_L2)/2)*m_l*m_h*(m_h/2)*(m_h/2);
    return m_Cx;



}
/////////////////////////COUPE/////////////////////////
float coupe::calcul_coeff(){
    m_Cx=R*m_l*(m_L1/2)*m_h;
    return m_Cx;

}
/////////////////////////BERLINE BREAK/////////////////////////
float Ber_Break::calcul_coeff(){
    m_Cx=R*((m_L1+m_L2)/2)*m_l*m_h;
    return m_Cx;

}
/////////////////////////BERLINE 4X4/////////////////////////
float Ber_4x4::calcul_coeff(){
    m_Cx=R*m_L1*m_l*m_h;
    return m_Cx;

}

int chassis::get_prix_c(){
    if (m_option==1) m_prix+=1500;
    return m_prix;
}
