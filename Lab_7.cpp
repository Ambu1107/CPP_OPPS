#include <iostream>
using namespace std;

class Employee {
	public:
		string name;
		float salary;
		char rating;
		int exp;
		
		Employee() {
			cout<<"Enter your name: "; cin>>name;
			cout<<"Enter the year of experience you have: "; cin>>exp;
			cout<<"Enter the rating: "; cin>>rating;
			cout<<"Enter your salary: "; cin>>salary;
		}
		
		void get_info() {
			cout<<"----Details----"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Experience: "<<exp<<endl;
			cout<<"Rating: "<<rating<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
		
		// By passing only salary the increment will be 10%
		float increment(float salary) {
			float inc;
			inc = salary * 0.1;
			return salary+inc;
		}
		
		// Here we are passing 2 parameters (salary, experience) depending on year of experience it will calculate the increment
		float increment(float salary, int exp) {
			float inc;
			if (exp<5) {
				inc = salary * 0.1;
			}
			else if (exp<10) {
				inc = salary * 0.2;
			}
			else {
				inc = salary * 0.3;
			}
			return inc + salary;
		}
		
		// Here we are passing 3 parameters (salary, experience, rating) depending on last 2 parameters it will calculate the increment
		float increment(float salary, int exp, char rating) {
			float inc;
			if (rating == 'A' || rating == 'B') {
				inc = salary * 0.2;
			}
			else if (rating == 'C' || rating == 'D') {
				inc = salary * 0.1;
			}
			else {
				inc = salary * 0.05;
			}
			return salary + inc;
		}
		
};

// Employee e1;
//Employee e2;
Employee e3;
int main( ) {
	//e1.get_info();
	//cout<<"Your increment: "<<e1.increment(e1.salary)<<endl;
	
	//e2.get_info();
	//cout<<"Your increment: "<<e2.increment(e2.salary, e2.exp)<<endl;
	
	e3.get_info();
	cout<<"Your increment: "<<e3.increment(e3.salary, e3.exp, e3.rating)<<endl;
	
	return 0;
}
