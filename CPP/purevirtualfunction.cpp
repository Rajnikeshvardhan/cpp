#include<iostream>
using namespace std;
class shape {
public:
	virtual void draw()=0;
};
class circle : public shape{
public:
	void draw() {
		cout << "circle" << endl;
	}
};
class rectangle : public shape{
public:
	void draw() {
		cout << "rectangle" << endl;
	}
};
int main()
{
	circle c;
	rectangle r;
	shape* ptr;
	ptr = &c;
	shape* ptr1;
	ptr1 = &r;
	ptr->draw();
	ptr1->draw();

};