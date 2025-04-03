#include<iostream>
using namespace std;
class product {
private:
	string name;
	double price;
	double discountpercentage;

public:
	product(string n, double p, double d) : name(n), price(p), discountpercentage(d) {

	}

	inline double calculateDiscount();
	void displayprice();
};
inline double product ::calculateDiscount() {
	return price - (price * discountpercentage / 100);
}
void product ::displayprice() {
	cout << "product: " << name << endl;
	cout << "original price : " << price << endl;
	cout << "discountpercentage : " << calculateDiscount() << endl;
}

int main() {
	string productname;
	double productprice, discount;

	cout << "Enter product name: ";
	cin >> productname;
	cout << "Enter product price: ";
	cin >> productprice;
	cout << "enter discount percentage: ";
	cin >> discount;

	product p(productname, productprice, discount);
	p.displayprice();
	return 0;
}
