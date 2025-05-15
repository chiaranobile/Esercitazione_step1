/*! @file Exponential.cpp
	@brief implementation of class Exponential
	@author Chiara Nobile e Valentina De Marchi

	Details.
*/ 

#include "Exponential.h"


/// @brief default constructor
Exponential::Exponential(){
	
	cout << "-- DEFAULT CONSTRUCTOR Exponential --" << endl;
	
	Init();
	
	}
	
/// @brief copy constructor
/// @param Si effettua solo il controllo della base poichè anche se k e c fossero 0 o < 0 il polinomio ha senso. Eventuali valori senza senso vengono controllati nelle funzioni Set
Exponential::Exponential(const Exponential &p){	

	int i;
   	cout << "-- Copy constructor Exponential-- " << endl;
   	cout << " " << endl;
		
	if((p.b_coeff == NULL) || (p.b_coeff < 0)){ 
	   	ErrorMessage("Copy constructor: the object to be copied has no base");
	   	exit(-1);																
    }
	b_coeff = p.b_coeff;
	k_coeff = p.k_coeff;
	c_coeff = p.c_coeff;
}
	
/// @brief destructor 
Exponential::~Exponential(){

	Reset();

}
///@brief default inizialization of the object
void Exponential::Init(){

	SetBase(1);
	SetCoeffK(1);
	SetCoeffC(1);
}

///@brief total reset of the object
void Exponential::Reset(){

	Init();

}

///@brief sets the value of the b_coeff
double Exponential::SetBase(double b){

 	if (b <= 0.) {
		WarningMessage("Exponential -- SetBase: b_coeff should be > 0. Value not changed.");
		return;
	}
	b_coeff = b;
}

///@brief sets the value of the k_coeff
double Exponential::SetCoeffK(double k){

 	if (k != 0.) {
		WarningMessage("Exponential -- SetCoeffK: k_coeff should be > 0. Value not changed.");
		return;
	}
	k_coeff = k;
}

///@brief sets the value of the c_coeff
double Exponential::SetCoeffK(double k){

 	if (k != 0.) {
		WarningMessage("Exponential -- SetCoeffK: k_coeff should be > 0. Value not changed.");
		return;
	}
	c_coeff = c;
}

/// @brief writes an error message 
/// @param string message to be printed
void Exponential::ErrorMessage(const char *string){

	cout << "--- ERROR Exponential---  " << string << endl;
	cout << " " << endl;

}

/// @brief writes a warning message 
/// @param string message to be printed
void Exponential::WarningMessage(const char *string){

	cout << "--- WARNING Exponential---  " << string << endl;
	cout << " " << endl;
	
}

/// @brief gives the status of the object 
void Exponential::Dump(){

	int i;

	cout << " " << endl;
	cout << "---Dump Exponential--- " << endl;
	cout << " " << endl;
	
	if (b <= 0.) {
		cout <<	"The Exponential is not valid" << endl;
		return;
	
	cout << "b_coeff:  " << b_coeff <<endl;
	cout << "k_coeff:  " << k_coeff <<endl;
	cout << "c_coeff:  " << c_coeff <<endl;
	cout << " " << endl;

}