#include <iostream>
using namespace std;

union Student {
	int prn;
	float gpa;
	char div;
};

struct Fruit {
	int num;
	float weight;
	char sign;
};

class employee {
	public:
	int id;
	float salary;
	char dept;
};

Student s1;
Fruit mango;
employee e1;

int main() {
	//--Union--
	cout<<"--Union--"<<endl;
	cout<<"Enter your prn: ";
	cin>>s1.prn;
	
	cout<<"Enter your gpa: ";
	cin>>s1.gpa;
	
	cout<<"Enter your div: ";
	cin>>s1.div;
	
	cout<<"You have entered: "<<endl;
	cout<<s1.prn<<" as PRN!"<<endl;
	cout<<s1.gpa<<" as GPA!"<<endl;
	cout<<s1.div<<" as DIV!"<<endl;
	cout<<"Conclusion: There is shared memory for the members of the union!"<<endl;
	
	//--Structure--
	cout<<"--Structure--"<<endl;
	cout<<"Enter the Number: ";
	cin>>mango.num;
	
	cout<<"Enter the Weight: ";
	cin>>mango.weight;
	
	cout<<"Enter the Sign: ";
	cin>>mango.sign;
	
	cout<<"You have entered: "<<endl;
	cout<<s1.prn<<" as Number!"<<endl;
	cout<<s1.gpa<<" as Weight!"<<endl;
	cout<<s1.div<<" as Sign!"<<endl;
	cout<<"Conclusion: The members of structure have Contiguous memory allocation!"<<endl;
	
	//--Class--
	cout<<"--Class--"<<endl;
	cout<<"Enter your Employee_ID: ";
	cin>>e1.id;
	
	cout<<"Enter your Salary: ";
	cin>>e1.salary;
	
	cout<<"Enter your Department: ";
	cin>>e1.dept;
	
	cout<<"You have entered: "<<endl;
	cout<<s1.prn<<" as Employee_ID!"<<endl;
	cout<<s1.gpa<<" as Salary!"<<endl;
	cout<<s1.div<<" as Department!"<<endl;
	cout<<"Conclusion: Memory is allocated when object is created!"<<endl;
	
	return 0;
}
