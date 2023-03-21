#include<iomanip>
using namespace std;
#ifndef COMPANY_H
#define COMPANY_H

class Company {
    private : string name;
              double sales[4];
    public:   Company( string n, double s[]);
              Company();
              ~Company();
              string getName();
              void setName( string n);

              void setSales ( double s[] );
              void setSale ( int index, double sale);
              double * getSales ();
              double getSale ( int index);
              double averageSales();
              double largestSale();
};

#endif