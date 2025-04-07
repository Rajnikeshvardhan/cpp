//using 
//friend function find the sum of three numbers in c++ ? //

#include<iostream>
using namespace std;
class Sum {
private:
	int num1, num2, num3;

public:

	Sum(int a, int b, int c) : num1(a), num2(b), num3(c) {
	}
	friend int findSum(Sum s);
};
int findSum(Sum s) {
	int sumOf= s.num1 + s.num2 + s.num3;
	int avg = sumOf / 3;
	int largestnum = s.num1 > s.num2 ? s.num1 : s.num2 > s.num3 ? s.num2 : s.num3;// ternary conditional operator
	cout << sumOf<<endl << avg<<endl;
	return largestnum;
}
int main() {
	Sum s1(2, 4, 6);
	cout<< findSum(s1);
}