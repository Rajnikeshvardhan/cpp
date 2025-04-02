#include<string>
#include<iostream>
using namespace std;
class employee2 {
	string name;
	int emid;
	int salary;
public:
	void setdata(string name, int emid, int salary) {
		this->name = name;
		this->emid = emid;
		this->salary = salary;
	}

public:void display() {
	cout << this->name << endl << this->emid << endl << this->salary;
}
};


