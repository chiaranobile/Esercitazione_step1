/*! @file main.cpp
	@brief test of class: Polynomial, Power and Exponential
	@author Chiara Nobile e Valentina De Marchi
*/

#include <iostream>
#include <cstring>
#include "CFunction.h"
#include "Polynomial.h"
#include "Exponential.h"
#include "Power.h"

using namespace std;
#define DIM 10

int main(){

	Exponential E, E2;
	Power PW, PW2;

	double a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int size, i;
	double pol[DIM]; // dichiaro vettore di dimensione fornita dall'utente

	cout << "Two objects for class Power (PW e PW2) and Exponential (E ed E2) and one for Polynomial (PL)(later)" << endl;

	cout << "Type the dimension of the polynomial: " << endl;
	cin >> size;
	cout << endl;
	while(size > DIM){
		cout << "The dimension of the Polynomial is greater than the array's" << endl;
		cout << "Type again the dimension of the Polynomial: " << endl;
		cin >> size;
	}
	cout << endl;
	cout << "Type the value of the coefficients: " << endl;
	for(i=0; i<size; i++){
		cout << "Type the coefficient " << i <<endl;
		cin >> pol[i];
		cout << endl;
	}
	Polynomial PL(pol, size);
	cout << endl;
	cout << endl;

	cout << "INSTANTIATE A NEW OBJECT OF CLASS POLYNOMIAL PL1 = TO PL" << endl;
	Polynomial PL1;
	PL1=PL;
	cout << "Check that the copy has been successfull: PL1 == to PL" << endl;
	if(PL1 == PL)
		cout<< "PL1 is equal to PL" << endl; //se copia avvenuta correttamente dovrebbero essere uguali
	else
		cout<< "PL1 and PL are different" << endl;
	cout << endl;
	cout << endl;
	PL.Dump();
	cout << endl;
	cout << endl;
	PL1.Dump();
	cout << endl;
	cout << endl;

	a5 = PL1.GetValue(2.);
	cout << "The value of PL1 calculated for x=2 is: " << a5 <<endl;

	cout << endl;
	cout << endl;
	cout << "--- CHANGE THE VALUES OF E ---" << endl;
	cout << endl;
	cout << "Type the base: " << endl;
	cin >> a0;
	E.SetBase(a0);
	cout << endl;
	cout << "Type the coefficient: " << endl;
	cin >> a1;
	E.SetCoeffK(a1);
	cout << endl;
	cout << "Type the exponent: " << endl;
	cin >> a2;
	E.SetCoeffC(a2);
	cout << endl;
	cout << endl;
	E.Dump();
	cout << endl;
	cout << endl;
	a6 = E.GetValue(2.);
	cout << "The value of E calculated for x=2 is: " << a6 << endl;
	cout << endl;
	cout << endl;
	cout << "Check that E and E2 are different" << endl;
	if(E == E2)
		cout<< "E2 is equal to E" << endl;
	else
		cout<< "E2 and E are different" << endl; //se posti valori diversi da quelli di default dovrebbero essere diversi
	cout << endl;
	cout << endl;

	cout << "INSTANTIATE A NEW OBJECT OF CLASS EXPONENTIAL E1 = TO E" << endl;
	Exponential E1;
	E1 = E;
	cout << "Check that the copy has been successfull: E1 == to E" << endl;
	if(E1 == E)
		cout<< "E1 is equal to E" << endl;
	else
		cout<< "E1 and E are different" << endl;
	cout << endl;
	cout << endl;
	E.Dump();
	cout << endl;
	cout << endl;
	E1.Dump();
	cout << endl;
	cout << endl;
	a8 = E1.GetValue(2);
	cout << "The value of E1 for x=2 is: " << a8 << endl;
	cout << endl;
	a9 = E.GetValue(2);
	cout << "The value of E for x=2 is: " << a9 << endl;
	cout << endl;
	cout << endl;

	cout << "--- CHANGE THE VALUE OF PW ---" << endl;
	cout << endl;
	cout << "Type the coefficient: " << endl;
	cin >> a3;
	PW.SetCoeffK(a3);
	cout << endl;
	cout << "Type the exponent: " << endl;
	cin >> a4;
	PW.SetCoeffE(a4);
	cout << endl;
	cout << endl;
	PW.Dump();
	cout << endl;
	cout << endl;
	a7 = PW.GetValue(2);
	cout << "The value of PW for x=2 is: " << a7 << endl;
	cout << endl;
	cout << endl;
	cout << "Check that PW and PW2 are different" << endl;
	if(PW == PW2)
		cout<< "PW2 is equal to PW" << endl;
	else
		cout<< "PW2 and PW are different" << endl; //se posti valori diversi da quelli di default dovrebbero essere diversi

	cout << endl;
	cout << endl;
	cout << "INSTANTIATE A NEW OBJECT OF CLASS POWER PW1 = TO PW" << endl;
	Power PW1;
	PW1 = PW;
	cout << "Check that the copy has been successfull: PW1 == PW" << endl;
	if(PW1 == PW)
		cout<< "PW1 is equal to PW" << endl;
	else
		cout<< "PW1 and PW are different" << endl;
	cout << endl;
	cout << endl;
	PW.Dump();
	cout << endl;
	cout << endl;
	PW1.Dump();
	cout << endl;

	return 0;
}
