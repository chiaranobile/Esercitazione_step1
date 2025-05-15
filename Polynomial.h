/*! @file polinomio.h
	@brief A class for polynomial functions
	@author Chiara Nobile e Valentina De Marchi

	Details.
*/ 

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <cmath>
#include <cstring>
#include "CFunction.h"

using namespace std;

class Polynomial {
private:
    double* coeff;
    int degree;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Polynomial();
	Polynomial(const double* coefficients, int size);
	Polynomial(const Polynomial &p);
	virtual ~Polynomial();
	/// @}
	
	
	/// @name OPERATORS
	/// @{
    Polynomial& operator=(const Polynomial &p);
    Polynomial operator+(const Polynomial &p);
    bool operator==(const Polynomial &p);
	/// @}
	
	void SetPolynomial(const double* coefficients, int size);
	
	/// @name GETTERS
	/// @{
    double GetValue(double in) const;
   	/// @}
	
	void Reset();
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}

};

#endif
