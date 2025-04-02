#include<iostream>
class bank {
	int accblc;
	int accnum;
public: bool valid(int amount) {
	if (accblc < amount) {
		return false;
	}
	if (amount <= 0) {
		return false;
	}
	else {
		return true;
	}
}
public:
	bank(int accblc, int accnum) {
		this->accblc = accblc;
		this->accnum = accnum;
	}
public:
	void deposit(int a) {
		accblc = accblc + a;
	}
public:
	void withdraw(int b) {
		if (valid(b)) {
			accblc = accblc - b;
		}
		else {
			std::cout << "less blc"<<"\n";
		}
	}

public:
	void display() {
		std::cout << "blc= " << accblc << "\n " << accnum;
	}


};
int main() {
	bank obj(500, 12345);
	
	obj.withdraw(100);

	obj.deposit(100);
	obj.withdraw(600);
	obj.display();

}


