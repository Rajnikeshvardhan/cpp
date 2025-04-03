#include<iostream>
using namespace std;
class Vehicle {
protected:
	string brand;
	int speed;

public:
	Vehicle(string b, int s) : brand(b), speed(s)
	{
	}
	virtual void displayInfo() = 0;
	void setSpeed(int s) {
		speed = s;
	}
	int getSpeed() {
		return speed;
	}
};

class car :public Vehicle {
	;
private:
	int numDoors;
public:
	car(string b, int s, int d) :Vehicle(b, s)
	{
		numDoors = d;
	}
	void displayInfo() override {
		cout << "Brand: " << brand << "Speed: " << speed <<" Doors: " << numDoors << endl;
	}
};
int main() {
	car myCar("Toyota", 120, 4);
	myCar.displayInfo();
	myCar.setSpeed(300);
	cout << "updated speed :" << myCar.getSpeed() << endl;

	return 0;
}