#include<iostream>
#include<string.h>
using namespace std;
class Bank {
	int accountbalance;
	int accountno;
public:
	Bank(int accountbalance, int accountno) {
		this->accountbalance = accountbalance;
		this->accountno = accountno;

	}
public:
	void deposit(int a) {
		accountbalance = accountbalance + a;

	}
public:
	void withdraw(int b) {
		accountbalance = accountbalance - b;
    }
public:
	void display() {
		cout<<"balance = " << accountbalance

	}




};