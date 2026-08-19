#include <iostream>
using namespace std;

class employee {
	public:
		string name;
		int id;
		char dept;
		float increment;
	
	employee() {
		cout<<"Inside Constructor"<<endl;
		increment=10;
		cout<<"Salary: ";
		cin>>salary;
	}
	
	void set_info() {
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter id: ";
		cin>>id;
		cout<<"Enter dept: ";
		cin>>dept;
	}
	
	void get_info() {
		cout<<"----Employee Details----"<<endl;
		cout<<"Name: "<<name<<endl<<"Employee ID: "<<id<<endl<<"Department: "<<dept<<endl<<"Salary: "<<salary<<endl<<"Increment: "<<increment<<"%"<<endl;
		cout<<"------------------"<<endl;
	}
	
	private:
		float salary;
};

employee e1,e2;

int main() {
	e1.set_info();
	e1.get_info();
	
	e2.set_info();
	e2.get_info();
	return 0;
}
