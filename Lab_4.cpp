#include <iostream>
using namespace std;

class employee {
	public:    //Public Data Members
		string name;
		int id;
		char dept;
		float increment;

	// Default Constructor
	employee() {
		cout<<"Inside Constructor"<<endl;
		increment=10;
		cout<<"Salary: ";
		cin>>salary;
	}

	// Membor Function (To set the data)
	void set_info() {
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter id: ";
		cin>>id;
		cout<<"Enter dept: ";
		cin>>dept;
	}

    // Membor Function (To get the data)
	void get_info() {
		cout<<"----Employee Details----"<<endl;
		cout<<"Name: "<<name<<endl<<"Employee ID: "<<id<<endl<<"Department: "<<dept<<endl<<"Salary: "<<salary<<endl<<"Increment: "<<increment<<"%"<<endl;
		cout<<"------------------"<<endl;
	}
	
	private:    // Private Data Members
		float salary;
};

employee e1,e2;  // Object Creation

int main() {
	e1.set_info();
	e1.get_info();
	
	e2.set_info();
	e2.get_info();
	return 0;
}
