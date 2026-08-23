#include <iostream>
using namespace std;

class MyEmployee{    // Declaring Employee Class
	public:    // Data Members (Public Access)
		string name;
		char dept;
		int id;
		float exp;
		
		void set_info() {    // Member Function (To take input)
			cout<<"Enter Name: ";
			cin>>name;
			
			cout<<"Enter Employee ID: ";
			cin>>id;
			
			cout<<"Enter Department: ";
			cin>>dept;
			
			cout<<"How many years of experience do you have? ";
			cin>>exp;
			
			cout<<"Enter your Salary: ";
			cin>>salary;
		}
		
		void get_info() {    // Member Function (To display output)
			cout<<"----Employee Details----"<<endl;
			cout<<"Employee Name: "<<name<<endl<<"Employee ID: "<<id<<endl<<"Working Department: "<<dept<<endl<<"Year of Experience: "<<exp<<"Salary: "<<salary<<endl;
			cout<<"---------------------"<<endl;
		}
		
	private:    // Data Member (Private Access)
		float salary;
};

MyEmployee e1,e2,e3;    // Creating Objects of a Class (3 objects)

// Defining User-Defined Function to calculate increment 
float increment(float s, float per) {
	float inc = (s * per)/100;
	return inc;
}

int main() {
	cout<<"Welcome!"<<endl;
	
	e1.set_info();    
	e1.get_info();
	
	e2.set_info();
	e2.get_info();
	
	float s, per;
	cout<<"Enter Salary: ";
	cin>>s;
	
	cout<<"Enter percentage of increment: ";
	cin>>per;
	cout<<"Your Increment: "<<increment(s,per)<<" rupees"<<endl;
	cout<<"Have a great day!!"<<endl;
	return 0;
}
