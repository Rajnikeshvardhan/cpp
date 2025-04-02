#include<iostream>
class outsidefun {
public:
	int a;
public:
	int b;
	void add(int a,int b);
};


void outsidefun::add(int a, int b) {
	std::cout << a + b;
}


int main() {
	outsidefun obj;
	obj.add(100, 50);
};
