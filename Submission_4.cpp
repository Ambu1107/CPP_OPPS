#include <iostream>
using namespace std;

class Employee {  // Employee class created

	public:  // Public Data Members
		string name;
		
	Employee() {  // Default Constructor to initialize objects
		cout<<"Enter your Name: "; cin>>name;
		cout<<"Enter your Rating: "; cin>>rating;
		cout<<"Enter your Salary: "; cin>>salary;
	}
	
	void get_info() {  // Member Function to display information 
		cout<<"----Employee Details----"<<endl;
		cout<<"Employee Name: "<<name<<endl;
		cout<<"Employee Rating: "<<rating<<endl;
		cout<<"Employee Salary: "<<salary<<endl;
	}
	
	// Unary Operator Overloading (Decrement Operator --)
	Employee &operator --() {  // Defination of (--a) operator
		--rating;
		--salary;
		return *this;
	}
	
	// Binary Operator Overloading (Multiplication Operator *)
	Employee operator * (Employee &ee1) {  // Defination of * Operator
		Employee temp;
		temp.rating = this->rating * ee1.rating;
		temp.salary = this->salary * ee1.salary;
		temp.name = "My_Name";
		return temp;
	}
	
	private:  // Private Data Members
		int rating;
		float salary;
	
};

Employee e1,e2,e3;  // Objects Creation

int main() {
	e1.get_info();
	e2.get_info();
	e3.get_info();
	
	// Traditional Decrement (--a) Operator (Predecrement Operator)
	int a = 11;
	cout<<"Traditional Unary (--) Operator: {--a} -- "<<--a<<endl;
	
	// Overloaded Decrement(--) Operator
	cout<<"After Unary Overloading"<<endl;
	--e1;
	e1.get_info();
	--e2;
	e2.get_info();
	
	// Traditional Multiplication Operator
	int x = 7;
	int y = 9;
	cout<<"Traditional Binary (*) Operator: {a*b} -- "<<x*y<<endl;
	
	// Overloaded Multiplication (*) Operator
	e3 = e1 * e2;
	cout<<"After Binary Overloading"<<endl;
	e3.get_info();
	
	return 0;
}
