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
   // Declare your Rational object here
   Rational frac;

   // Call your prompt function here
   frac.prompt();

   // Call your display functions here
   frac.display();
   frac.displayDecimal();
   frac.multiplyBy();
   frac.reduce();
   
   return 0;
}
