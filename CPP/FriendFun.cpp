#include<iostream>
using namespace std;
class bankacount {
	int bankblc;
public: bankacount() {
		bankblc = 70000;
	}
	friend void disp(bankacount a);
	friend void trans(bankacount &b, int amt);
};
void disp(bankacount a) {
	cout << a.bankblc<<endl;
}
void trans(bankacount &b, int amt)
{
	b.bankblc = b.bankblc - amt;
	cout << b.bankblc;
}
int main() {
	bankacount obj;
     disp(obj);
	 trans(obj, 1000);
	

}