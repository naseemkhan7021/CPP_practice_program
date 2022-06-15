// function defination file
#include".h"
double Fr_to_Cel(double fr)
{
     double Cel = (fr-32)/1.8;
     return Cel;
};

double Cel_to_Fr(double cel)
{
     double Fr = (cel*1.8)+32;
     return Fr;
};