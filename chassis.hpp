 #ifndef CHASSIS_H
 #define CHASSIS_H
 #include <iostream>
 using namespace std;
 #include <math.h>


class chassis{
protected:
    float m_l, m_h, m_L1, m_L2, m_Cx;
    int m_option;
    int m_prix, type;
    int R;
public:
    chassis();
    virtual float calcul_coeff()=0;
    int get_prix_c();
};

class berline: public chassis{
public:
    berline (int m_option);// prix+=0; init dimensions: option=o
    float calcul_coeff();
    };
class coupe: public chassis{
public:
    coupe (int m_option);
    float calcul_coeff();
    };
class Ber_Break: public chassis{
public:
    Ber_Break(int m_option);
    float calcul_coeff();
    };
class Ber_4x4: public chassis{
public:
    Ber_4x4(int m_option);
    float calcul_coeff();
    };

#endif
