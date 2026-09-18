#include <iostream>
using namespace std;

class Employee {
	public:    // Data Members (Public Access)
		string name;
		int id;
		int exp;

		// Default Constructor
		Employee() {
			cout<<"Inside Default Contructor"<<endl;
			
			cout<<"Name: "; cin>>name;
			cout<<"Employee ID: "; cin>>id;
			cout<<"Experience: "; cin>>exp;
			cout<<"Salary: "; cin>>salary;
			
		}
		
		// Parameterized Constructor
		Employee(string name, int id) {
			cout<<"Inside Parameterized Constructor"<<endl;
			
			exp = 6;
			salary = 95463.5;
			cout<<"Salary: "<<salary<<endl;
			
		}
		
		Employee(Employee &e) {    // Copy Constructor
			cout<<"Inside Copy Constructor"<<endl;
			
			salary = e.salary;
			cout<<"Salary: "<<salary<<endl;
			
			exp = e.exp;
			cout<<"Experience: "<<exp<<endl;
			
		}
		
		// Member Function
		void get_info() {
			cout<<"-----------------------------"<<endl;
			cout<<"Inside Member Function"<<endl;
			
			cout<<"----Providing Employee Details----"<<endl;
			cout<<"Employee Name: "<<name<<endl;
			cout<<"Employee ID: "<<id<<endl;
			cout<<"Year of Experience: "<<exp<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
			
			cout<<"-----------------------------"<<endl;
		}
		
		~ Employee() {    // Inside Destructor
			cout<<"Inside Destructor"<<endl;
		}
		
	private:    // Data Members (Private access)
		float salary;
};

Employee e1, e2;    // Object Created By Default Constructor
Employee e3("Rajnandini", 435767);    // Object Created By Parametarized Constructor
Employee e4(e3);    // Object Created By Copy Constructor

int main() {
	
	e1.get_info();  // Calling Member Function  
	e2.get_info();    // Calling Member Function (Second object)
	
	return 0;
}
