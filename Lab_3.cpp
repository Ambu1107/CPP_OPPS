#include <iostream>
using namespace std;

class employee {
	public:
		string name;
		char dept;
		
		void set_info() {
			cout<<"Enter Name: ";
			cin>>name;
			
			cout<<"Enter Department: ";
			cin>>dept;
			
			cout<<"Enter Salary: ";
			cin>>salary;
		}
		
		void get_info() {
			cout<<"--Employee Form--"<<endl;
			cout<<"Name: "<<name<<endl<<"Department: "<<dept<<endl<<"Salary: "<<salary<<endl;
			cout<<"--------------"<<endl;
		}
	private:
		float salary;
};

employee e1,e2,e3;

float increment(float earning, float per) {
	float inc;
	inc = (earning*per)/100;
	
	return inc;
}


int main( ) {
	
	/*e1.set_info();
	e1.get_info();
	
	e2.set_info();
	e2.get_info();*/
	float e,p,in;
	cout<<"Enter your salary to calculate increment: ";
	cin>>e;
	
	cout<<"Enter your percentage of increment: ";
	cin>>p;
	
	in=increment(e,p);
	cout<<"Your increment is: "<<in<<endl;
	
	return 0;
}
