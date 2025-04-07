/*1.Write a C++ program that demonstrates exception handling using custom 
exception classes without inheriting from std::exception.
1. Create a base exception class MathException(without inheriting from
std::exception).
	2. Derive two exception classes :
○ DivideByZeroException for division by zero.
○ NegativeSquareRootException for taking the square root of a negative
number.
3. Implement two functions :
○ divide(int a, int b) : Throws DivideByZeroException if b == 0.
○ safeSqrt(double x) : Throws NegativeSquareRootException if x < 0.
4. Handle exceptions in main() and ensure the program continues execution.*/

#include<iostream>
using namespace std;
class MathException {
public:
	virtual void ex() = 0;
};
class DivideByZeroException :public MathException {
public:
	void divide(int a, int b) {
		if (b == 0)
			throw DivideByZeroException();
	}
	void ex() override {
		cout << "zero";
	}
};
class NegativeSquareRootException :public MathException {
public:
	void safeSqrt(double x) {
		if (x < 0)
			throw NegativeSquareRootException();
	}

	void ex() override {
		cout << "<zero";
	}

};
int main() {
	
	DivideByZeroException z;
	NegativeSquareRootException n;
	try {
		z.divide(3, 0);
	}
	catch (MathException& e) {
		e.ex();
	}
	try {
		n.safeSqrt(-8);
	}
	catch (MathException& e) {
		e.ex();
	}
}