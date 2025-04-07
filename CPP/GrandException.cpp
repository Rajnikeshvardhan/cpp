/*3.Write a C++ program that manages student grades using exception handling. 
1. Create a base exception class (GradeException) inheriting from std::exception. 
2. Derive two exception classes: 
○ InvalidGradeException: Thrown when a grade is outside the valid range 
(0-100). 
○ FailingGradeException: Thrown when a student’s grade is below passing 
(e.g., < 40). 
3. Implement a Student class with: 
○ setGrade(int grade): Throws InvalidGradeException if grade < 0 or grade 
> 100. 
○ checkPass(): Throws FailingGradeException if grade < 40. 
4. Handle exceptions in main() and ensure the program continues execution.*/
#include<iostream>
using namespace std;
class GradeException :std::exception {
public:
	const char* what() const throw() override {
		return "GradeExeption ";
	}

};
class InvalidGradeException: public  GradeException{
	const char* what() const throw() override {
		return "InvalidGradeException ";
	}
};
class FailingGradeException : public  GradeException {
	const char* what() const throw() override{
		return "IFailingGradeException ";
	}
};
class Student {
public:
	int grade;
	void setGrade(int grade) {
		this->grade = grade;
		if (grade < 0 || grade>100)
			throw InvalidGradeException();
		cout << "valid grade"<<endl;
	}
	void checkPass() {
		if (grade < 40)
			throw FailingGradeException();
		cout << "pass";
	}
};

int main() {
	Student s;
	try {
		s.setGrade(9);
		s.checkPass();
	}
	catch (GradeException& e) {
		cout << e.what();
	}


}