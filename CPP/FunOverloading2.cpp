#include<iostream>
using namespace std;
class time2 {
public:
	void cal(int h, int m, int s) {
		cout << h << m << s<<endl;
	}
	time2 operator+() {

	}
};
int main(){
	time2 obj;
	obj.cal(2, 30, 40);
	time2 obj2;
	obj2.cal(4, 30, 40);
	return 0;
};