/***************************************************************
 * File: rational.cpp
 * Author: Maksim Vlasov
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"
#include <iostream>

using namespace std;


void Rational::prompt(){
   cout << "Top: ";
   cin >> top;
   cout << "Bottom: ";
   cin >> bottom;
   cout << "New variable: ";
   cin >>newOne;
}
/***************************************************************
* Rational :: display()
* Displays rational number in fraction form: x/y
***************************************************************/
void Rational::display(){
   if (top > bottom){
      cout << top/bottom << " " << top % bottom <<"/" <<bottom <<endl;
   }
   else
      cout << top << "/" << bottom << endl;
}
/*************************************************************
* Rational :: displayDecimal()
* Display rational number in decimal form: xx.xx
**************************************************************/
void Rational::displayDecimal(){
   float value = (float)top / bottom;

   cout << value <<endl;
}
/***************************************
* Display number in format :x x/x
***************************************/
void Rational::reduce(){
   if(bottom % top == 0){
      cout<< top/top << "/" << bottom/top << endl;
   }
}
/************************************
* Multiple by new number
************************************/

void Rational::multiplyBy(){
   cout << top * newOne << "/" << bottom * newOne;
}
