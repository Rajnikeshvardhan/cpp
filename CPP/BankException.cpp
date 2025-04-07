/*2.Write a C++ program that simulates a bank account system using custom
exception classes without inheriting from std::exception.
1. Create a base exception class BankException(without inheriting from
	std::exception).
	2. Derive two exception classes :
○ InsufficientFundsException : Thrown when attempting to withdraw more
than the available balance.
○ NegativeDepositException : Thrown when attempting to deposit a negative
amount.
3. Implement a BankAccount class with :
	○ deposit(double amount) : Throws NegativeDepositException if amount < 0.
	○ withdraw(double amount) : Throws InsufficientFundsException if amount >
	balance.
	4. Handle exceptions in main() and ensure the program continues execution.*/
#include<iostream>
using namespace std;



class  BankException {
public:
	virtual void showerror() = 0;
};
class InsufficientFundsException :public BankException {
public :
	void showerror() override {
		cout << "insufficent funds"<<endl;
	}
};
class NegativeDepositException :public BankException {
public:
	void showerror() override {
		cout << "Diposit amount should be positive";
	}
};
class bankAcount {
public:
	int blc;
public:
	bankAcount(int blc) {
		this->blc = blc;
	};
public:
	void withdraw(double amount) {
		cout << "avalable blc: "<<blc<<endl;
		if (blc < amount)
			throw InsufficientFundsException();
		blc = blc - amount;
		cout <<"blc after withdraw: "<< blc << endl;
	}
public:
	void diposit(double amount) {
		if (amount < 0)
			throw NegativeDepositException();
		blc = blc + amount;
		cout <<"blc after Diposit: "<< blc << endl;
	}

};
int main() {
	bankAcount is(5000);
		try {
			is.withdraw(9000);
	}
		catch (InsufficientFundsException& e) {
			e.showerror();
		}
		try {
			is.diposit(-1000);
		}
		catch (NegativeDepositException& e) {
			e.showerror();
		}

}
