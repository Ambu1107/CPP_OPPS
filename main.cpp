#include <iostream>
using namespace std;

class Employee { // Declaring Employee Class

public:  // Data Members (Public Access)
    string name;
    int id;
    int feedback;

    Employee() {   // Constructor (To take input)
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Employee ID: "; cin >> id;
        cout << "Enter Feedback Rating: "; cin >> feedback;
        cout << "Enter Salary: "; cin >> salary;
    }

    void get_info() {  // Member Function (To display output)
        cout << "\n----Employee Details----" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Feedback Rating: " << feedback << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "------------------------" << endl;
    }

    // Inline Function (To calculate increment)
    inline float increment() {
        return salary * 0.10;
    }

    // Friend Function Declaration
    friend void showSalary(Employee);

private:  // Data Member (Private Access)
    float salary;
};

// Friend Function Definition
void showSalary(Employee e) {
	cout<<"--Inside Friend Function--"<<endl;
    cout << "Salary Accessed Using Friend Function: "<< e.salary << endl;
}

Employee e1, e2;  // Creating Objects of a Class

int main() {
    e1.get_info();
    cout<<"Increment: "<< e1.increment() << endl;
    showSalary(e1);

    
    e2.get_info();
    cout<<"Increment: "<< e2.increment() << endl;
    showSalary(e2);

    return 0;
}
