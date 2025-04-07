#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class student{
public:
	int roll;
	string name;
	int marks;
public:
	void setdata() {
		cout << "enter name: ";
		cin >> name;
		cout << "enter roll: ";
		cin >> roll;
		cout << "enter marks: ";
		cin >> marks;	
		cout << "....................."<<endl;
	}

	void getdata() {
	
		
		cout << "name: " << name << endl;
		cout << "roll: " << roll << endl;
		cout << "marks: " << marks << endl;
		cout << "............................" << endl;
	}

};
int main() {
	
	
	
	/*student s;
	cout << "how many students: ";
	int n;

	cin >> n;
	ofstream file;
	file.open("abcd.txt");
	for (int i = 0; i < n; i++) {
		s.setdata();
		file.write((char*)&s, sizeof(s));
	}
	file.close();*/



	student s2;
	ifstream file2;
	file2.open("abcd.txt");
	//cout << " enter roll to find: ";
	//int roll1;
	//cin >> roll1;
	cout << " enter name to find: ";

	string name1;
	cin >> name1;
	bool found = false;
	while (file2.read((char*)&s2, sizeof(s2)))
	{
		//s2.getdata();
	/*if (s2.roll == roll1) {
			found = true;
			cout << "details of roll " << roll1 << endl;
			s2.getdata();
		}*/
		if (s2.name.compare(name1)==0) {
			found = true;
			cout << "details"<<endl;
			s2.getdata();
		}
	}

	if (found)
	cout << "Student found";
	else
		cout << "Student not found";

	//file2.close();

}