#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Complex
{

	double im = 0;
	double re = 0;

	Complex operator + (Complex);

	Complex operator - (Complex);

	Complex operator * (Complex);

	Complex operator / (Complex);

	double mod();

	friend std::ostream& operator << (std::ostream&, Complex);

	friend std::istream& operator >> (std::istream&, Complex&);

	/*static Complex random(int);*/

	void random_c(int);


};



#endif // !COMPLEX_H


