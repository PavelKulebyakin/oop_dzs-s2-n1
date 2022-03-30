#include "Complex.h"

int main() {

	srand(time(0));

	Complex A, B;

	//cout << "Enter A:\n"; cin >> A;
	//cout << "Enter B:\n"; cin >> B;

	/*A = Complex::random(100); B = Complex::random(100);*/

	A.random_c(100); B.random_c(100);

	cout << "A = " << A << endl; 
	cout << "B = " << B << endl;

	cout << "\nA + B = " << A + B << endl;

	cout << "\nA * B = " << A * B << endl;

	cout << "\nA / B = " << A / B << endl;
	 
	cout << "\nModule A = " << A.mod() << endl;

	cout << "\nModule B = " << B.mod() << endl;

}