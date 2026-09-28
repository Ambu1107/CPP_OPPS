#include <iostream>
using namespace std;

class Employee {
	public:     // Data Members (Public Access)
		string name;
		int rating;
		float salary;
		
		Employee() {     // Default Constructor
			cout<<"Inside Default Constructor"<<endl;
			cout<<"Name: "; cin>>name;
			cout<<"Rating: "; cin>>rating;
			cout<<"Salary: "; cin>>salary;
		}		
		
		void get_details() {     // Data Member to display details
			cout<<"----Employee Details----"<<endl;
			cout<<"Employee Name: "<<name<<endl;
			cout<<"Employee Rating: "<<rating<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
		}
		
		// '+' Operator Overloading Defination
		Employee operator + (Employee &e) {    
			Employee ee;
			 ee.rating = this->rating + e.rating;
			 ee.salary = this->salary + e.salary;
			 ee.name = "New Employee";
			 return ee;
		}
		
};

Employee e1, e2, e3;     // Object Creation

int main() {
	// Default '+' Operator
	cout<<"Default '+' Operator: "<<endl;
	cout<<"Rating Addition: "<<e1.rating + e2.rating<<endl;
	cout<<"Salary Addition: "<<e1.salary + e2.salary<<endl;
	
	// Operator Overloading
	cout<<"Operator Overloading"<<endl;
	e3 = e1 + e2;
	e3.get_details();
	return 0;
}
