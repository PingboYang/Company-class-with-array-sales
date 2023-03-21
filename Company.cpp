#include "Company.h"
#include <iostream>
using namespace std;

Company :: Company (  ) {
              name = "";
              for ( int i=0; i< 4;i++)
                sales[i] = 0;
            }
Company :: Company ( string n, double s[] ) {
              name = n;
              for ( int i=0; i< 4;i++)
                  sales[i] = s[i];
            }
Company :: ~ Company()  {
      cout << "\nFree object";
}

string Company:: getName() { return name ;}
void   Company:: setName ( string n ) { name = n; }
//-----------------------------------------
double  * Company :: getSales () {
  return sales;
}
//------------------------------------------

double Company :: getSale ( int index ) {
  return sales[index];  
}

void Company :: setSales ( double s[] ) {
    for ( int i=0; i< 4;i++)
          sales[i] = s[i];
}
void Company :: setSale ( int index , double s) {
          sales[index] = s;
}

double Company :: averageSales() {
      double sum = 0;
      for ( int i = 0; i < 4; i ++ ) 
          sum += sales[i];
      return sum / 4;
}

double Company:: largestSale() {
    double largestSoFar = sales[0];
    for ( int i = 1; i < 4; i ++ ) 
      if ( sales[i]  > largestSoFar )
          largestSoFar = sales[i];
    return largestSoFar;
}


