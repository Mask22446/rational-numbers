/***************************************************************
 * File: ta04.cpp
 * Author: Maksim Vlasov
 * Purpose: Contains the main function to test the Rational class.
 ***************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

int main()
{
   Rational frac;

   frac.prompt();

   frac.display();
   frac.displayDecimal();
   frac.multiplyBy();
   frac.reduce();
   
   return 0;
}
