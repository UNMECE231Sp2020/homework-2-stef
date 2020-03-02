#include <iostream>
#include <cmath>
#include "Declarations.hpp"

Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double x) {
	real = x;
	imag = 0;
}

Complex::Complex(double x, double y) {
	real = x;
	imag = y;
}

Complex::Complex(const Complex &complexNum) {
	real = complexNum.real;
	imag = complexNum.imag;
}

void Complex::print () {
	if (imag < 0) {
		std::cout  << real << " - " << -imag << "j" << std::endl;
	}
	else
		std::cout  << real << " + " << imag << "j" << std::endl;
}	

double Complex::getReal() {
	return real;
}

double Complex::getImag() {
	return imag;
}

Complex Complex::add(Complex c) {
	Complex sum;
	sum.real = real + c.real;
	sum.imag = imag + c.imag;

	return sum;
}

Complex Complex::sub(Complex c) {
	Complex Sub;
	Sub.real = real - c.real;
	Sub.imag = imag - c.imag;

	return Sub;
}

Complex Complex::mult(Complex c) {
	Complex product;
	product.real = (real * c.real) - (imag * c.imag);
	product.imag = (real * c.imag) + (c.real * imag);

	return product;
}

Complex Complex::div(Complex c) {
	Complex quotient;
	quotient.real = (real*c.real + imag*c.imag) / (c.real*c.real + c.imag*c.imag);
	quotient.imag = (imag*c.real - real*c.imag) / (c.real*c.real + c.imag*c.imag);

	return quotient;
}

Complex Complex::conjugate() {
	imag = -imag;
	return *this;
}


double Complex::magnitude() {
	double result;
	double a = real * real;
	double b = imag * imag;
	double c = a + b;
	
	result = sqrt(c);
	return result;
}

double Complex::phase() {
	double result;
	result = atan(imag/real);
	return result * (180/M_PI);
}

Complex Complex::operator+(Complex c) {
	Complex result(add(c));
	return result;
}

Complex Complex::operator-(Complex c) {
	Complex result(sub(c));
	return result;
}

Complex Complex::operator*(Complex c) {
	Complex result(mult(c));
	return result;
}

Complex Complex::operator/(Complex c) {
	Complex result(div(c));
	return result;
}

std::ostream& operator<<(std::ostream &out, const Complex &complexNum) {
	out << complexNum.real << " " << complexNum.imag << " ";
	return out;
}














