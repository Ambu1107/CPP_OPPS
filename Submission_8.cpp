#include <iostream>
using namespace std;

class Employee {  // Declaring Employee Class

public:  // Data Members (Public Access)
    string name;
    int id;
    int feedback;

    Employee() {  // Constructor (To take input)
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Employee ID: "; cin >> id;
        cout << "Enter Feedback Rating (1-5): "; cin >> feedback;
        cout << "Enter Salary: "; cin >> salary;
    }

    void get_info() {  // Member Function (To display output)
        cout << "\n----Employee Details----" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Feedback Rating: " << feedback << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------------" << endl;
    }

    void validate() {  // Member Function (Exception Handling)
        try {
            if (salary < 0)
                throw salary;

            if (feedback < 1 || feedback > 5)
                throw feedback;

            cout << "\nValid Employee Data!" << endl;
        }

        catch (float s) {
            cout << "\nException Caught!" << endl;
            cout << "Salary cannot be negative." << endl;
        }

        catch (int f) {
            cout << "\nException Caught!" << endl;
            cout << "Feedback must be between 1 and 5!" << endl;
        }
    }

private:  // Data Member (Private Access)
    float salary;
};

Employee e1, e2;  // Creating Objects of a Class

int main() {

    e1.get_info();
    e1.validate();

    e2.get_info();
    e2.validate();

    return 0;
}
