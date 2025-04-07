/*.Write a C++ program that simulates an ATM transaction system with custom 
exception handling. 
1. Create a base exception class (ATMException) inheriting from std::exception. 
2. Derive two exception classes: 
○ InvalidPINException: Thrown when an incorrect PIN is entered more than 
3 times. 
○ InsufficientBalanceException: Thrown when trying to withdraw more than 
the account balance. 
3. Implement an ATM class with: 
○ validatePIN(int enteredPIN): Throws InvalidPINException after 3 incorrect 
attempts. 
○ withdraw(double amount): Throws InsufficientBalanceException if amount 
> balance. 
4. Handle exceptions in main() and ensure the program continues execution.*/
#include<iostream>
using namespace std;
class ATMException :std::exception {
public:
	const char* what() const throw() override {
		return " ";
	}
	
};
class InvalidPINException:public ATMException {
public:
	const char* what() const throw() override {
		return "InvalidPINException::incorrect PIN is entered more than 3 times\n";
	}

};
class InsufficientBalanceException : public ATMException{
public:
	const char* what() const throw() override {
		return "low blc";
	}

};
class ATM {
public:int CorectPIN;
	  int blc=1000;
public:
	void validatePIN(int enteredPIN) {
		
		cout << "enter correct PIN ";
		int a = 0;
		while (a < 3) {
			int b;
			cin >> b;
			if (b!=enteredPIN) {

				cout << "Incorrect PIN"<<endl;
				if (a < 2) {
					cout << "enter correct PIN again ";
					cout << "(Attempts Left: " << (2 - a) << "): ";
				}
			}
			else {
				cout << "correct pin\nProceed withdraw"<<endl;
				break;
			}
			a++;
			if (a == 3) {
				throw InvalidPINException();
			}
		}	
		
	}
	void withdraw(double amount) {
		cout << "avalable blc: "<<blc<<endl;
		if (amount > blc) {
			throw InsufficientBalanceException();
		}
		blc = blc - amount;
		cout << " remaining blc after withdraw: "<< blc<<endl;
	}

};
int main() {
	ATM a;
	try {
		a.validatePIN(1234);
		cout << "Enter withdraw amout: ";
		int c;
		cin >> c;
		a.withdraw(c);

	}
	catch (ATMException& c) {
		cout << c.what();
	}

}
