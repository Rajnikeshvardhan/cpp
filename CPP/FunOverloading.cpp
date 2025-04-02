#include<iostream>
using namespace std;
class cal {
public:
	int add(int a, int b) {
		return a + b;
	}
	double add(double a, double b) {
		return a + b;
	}
	int sub(int a, int b) {
		return a - b;
	}
	double sub(double a, double b) {
		return a - b;
	}
	int mul(int a, int b) {
		return a *b;
	}
	double mul(double a, double b) {
		return a *b;
	}
};

int main() {
	cal obj;
	int input;
	cout << "enter op add=1, sub=2, mul=3";
	cin >> input;
	double a, b;
	cout << "enter a value";
	cin >> a;
	cout << "enter b value";
	cin >> b;

	switch (input) {
	case 1:
		cout<< obj.add(a, b);
		break;
	case 2:
		cout<<obj.sub(a, b);
		break;
	case 3:
		cout<<obj.mul(a, b);
		break;
	}
	//if (input == 1) {
		//obj.add(a, b);
	//}
	/*else if (input == 2) {
		obj.sub(a, b);
	}
	else(input == 3); {
		obj.mul(a, b);
	}*/
	return 0;
};