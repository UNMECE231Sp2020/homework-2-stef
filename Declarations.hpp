#include <iostream>

class Complex {
	private:
		double real;
		double imag;

	public:
		Complex();
		Complex(double x);
		Complex(double x, double y);
		Complex(const Complex &complexNum);
		
		void print();
		double getReal();
		double getImag();
		Complex add(Complex c);
		Complex sub(Complex c);
		Complex mult(Complex c);
		Complex div(Complex c);
		double magnitude();
		Complex conjugate();
		double phase();
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator*(Complex c);
		Complex operator/(Complex c);

 		friend std::ostream & operator<<(std::ostream & out,const Complex &complexNum);
};





