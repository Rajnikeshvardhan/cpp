#include<iostream>
using namespace std;
class payment {
public:
	virtual void propay() {
		cout << "propay";
	}
};
class credit : public payment {
public:
	void propay() {
		cout << "processing payment via credit card" << endl;
	}
};
class paypal : public payment {
public:
	void propay() {
		cout << "processing payment via paypal" << endl;
	}
};
int main()
{
	credit c;
	paypal p;
	payment* ptr;
	ptr = &c;
	payment* ptr1;
	ptr1 = &p;
	ptr->propay();
	ptr1->propay();

};

