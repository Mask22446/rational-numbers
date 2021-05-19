/***************************************************************
 * File: rational.h
 * Author: Maksim Vlasov
 * Purpose: Contains the definition of the Rational class
 ***************************************************************/
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
  private:
   int top;
   int bottom;
   int newOne;
  public:
   void prompt();
   void display();
   void displayDecimal();
   void multiplyBy();
   void reduce();
};

#endif
