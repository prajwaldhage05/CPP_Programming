#include <iostream>
#include <string>
using namespace std;

// Date class from previous exercise
class Date {
    private:
        int day;
        int month;
        int year;

    public:
        // Default constructor
        Date() {
            day = 1;
            month = 1;
            year = 1970;
        }

        // Parameterized constructor
        Date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        // Display function
        void display() {
            cout << day << "/" << month << "/" << year << endl;
        }
};

class Employee {
    private:
        int id;
        string name;
        Date dob;

    public:
        // Default constructor
        Employee() {
            id = 0;
            name = "";
            dob = Date();
        }

        // Parameterized constructor
        Employee(int emp_id, string emp_name, Date emp_dob) {
            id = emp_id;
            name = emp_name;
            dob = emp_dob;
        }

        // Accept function to accept information
        void accept() {
            cout << "Enter employee ID: ";
            cin >> id;

            cout << "Enter employee name: ";
            cin >> name;

            cout << "Enter employee date of birth (dd mm yyyy): ";
            int d, m, y;
            cin >> d >> m >> y;
            dob = Date(d, m, y);
        }

        // Display function to display employee information
        void display() {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Date of Birth: ";
            dob.display();
        }
};

int main() {
    // Create employee object using default constructor
    Employee emp1;

    // Accept information using accept() function
    emp1.accept();

    // Display employee information using display() function
    cout << "Employee 1 Information:" << endl;
    emp1.display();

    // Create employee object using parameterized constructor
    Date dob2(12, 5, 1990);
    Employee emp2(1234, "Jane Doe", dob2);

    // Display employee information using display() function
    cout << "\nEmployee 2 Information:" << endl;
    emp2.display();

    return 0;
}
