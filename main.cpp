#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class employee {
	public:
		string name;
		char dept;
		void set_info() {
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter dept: ";
			cin>>dept;
			
			cout<<"Enter salary: ";
			cin>>salary;
		}
		
		void get_info() {
			cout<<"--Display Employee data--"<<endl;
			cout<<"Name: "<<name<<endl<<"Department: "<<dept<<endl<<"Salary: "<<salary<<endl;
			cout<<"Done"<<endl;
		}
		
	private:
		float salary;

};
employee e1,e2,e3;

float increment(float s1,float per) {
	float inc;
	inc=s1+(s1*per)/100;
	return inc;
}

int main( ) {
	/*e1.set_info();
	e1.get_info();
	
	e3.set_info();
	e3.get_info();	*/
	float a;
	a=increment(67500.5f,10.0f);
	cout<<a<<endl;
	return 0;
}
