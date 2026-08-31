#include <iostream>
using namespace std;

class Employee {
	public:  
		string name;
		int id;
		char dept;
		float exp;
		
		Employee() {
			cout<<"Inside Default Constructor"<<endl;
			
			cout<<"Enter Employee Name: "; cin>>name;
			cout<<"Enter Employee ID: "; cin>>id;
		}
		
		void set_info() {
			cout<<"Inside Member Function";
			cout<<"Enter your Department: "; cin>>dept;
			cout<<"Work Experience: "; cin>>exp;
			cout<<"Enter your Salary: "; cin>>salary;
		} 
		
		void get_info() {
			cout<<"----Employee Details----"<<endl;
			cout<<"Employee Name: "<<name<<endl<<"Employee ID: "<<id<<endl<<"Working Department: "<<dept<<endl<<"Working Experience: "<<exp<<endl<<"Salary: "<<salary<<endl;
		}
		
		Employee(int salary, int per) {
			cout<<"Inside Parameterized Constructor"<<endl;
			float inc = (salary * per)/100;
			cout<<"Employee Increment: "<<inc<<endl;
		}
		
		Employee(Employee & e) {
			cout<<"Inside Copy Constructor"<<endl;
			name = e.name;
			id = e.id;
			dept = e.dept;
		}
		
	private:
		float salary;
};

Employee e1, e2, e3;  // Object Created by Default Constructor
Employee e4(67542, 10);  // Object Created  by Parameterized Constructor
Employee e5(e4);  // Object Created by Copy Constructor

int main() {
	
	e1.set_info();
	e1.get_info();
	
	e2.set_info();
	e2.get_info();

	return 0;
}
