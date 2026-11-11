#include <iostream>
using namespace std;

class Employee {  // Base Class 
	public:  // Data Members with public Access
		string name;
		int id;
		
		
		Employee() {  // Default Constructor
			cout<<"Enter Name: "; cin>>name;
			cout<<"Enter ID: "; cin>>id;
			cout<<"Enter Salary: "; cin>>salary;
		}
	
		void get_info() {  // Member Function to display information of Base Class
			cout<<"----Employee Details----"<<endl;
			cout<<"Employee Name: "<<name<<endl;
			cout<<"Employee ID: "<<id<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
		}
	
		void fun1() {  // Public Access Member Function within Base Class
			cout<<"Inside Base Class"<<endl;
		}
	
		private:  // Data Member with Private Access
			float salary;
};

class Consultant : private Employee {  // Derived Class with Private Access
	public:  // Data Members with Public Access
		string mail;
		int exp;
		
		Consultant() {  // Default Constructor
			cout<<"Enter Email: "; cin>>mail;
			cout<<"Working Experience: "; cin>>exp;
			cout<<"Feedback: "; cin>>feedback;
		}
		
		void get_info1() {  // Member Function to display information of Derived Class
			get_info();  // Base Class Member Function
			cout<<"Employee Email: "<<mail<<endl;
			cout<<"Employee Experience: "<<exp<<endl;
			cout<<"Feedback: "<<feedback<<endl;
		}
		
		void fun2() {  // Public Access Member Function within Derived Class
			fun1();  // Base Class Member Function
			cout<<"Inside Derived Class"<<endl;
		}
		
	private:  // Data Member with Private Access 
		int feedback;
};

Consultant c1, c2;  // Objects of Derived Class

int main() {

	c1.get_info1();  // Derived Class Member Function
	c1.fun2();  // Derived Class Member Function
	
	c2.get_info1();
	c2.fun2();
	
	return 0;
}
