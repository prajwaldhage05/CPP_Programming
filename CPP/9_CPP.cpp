#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;
    double basic_salary;
    double hra;
    double medical = 1000;
    double pf;
    double pt = 200;
    double net_salary;
    double gross_salary;
    
public:
    Employee(int id, string name, double salary) {
        emp_id = id;
        emp_name = name;
        basic_salary = salary;
        hra = 0.5 * basic_salary;
        pf = 0.12 * basic_salary;
        gross_salary = basic_salary + hra + medical;
        net_salary = gross_salary - pf - pt;
    }
    
    void displayDetails() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Medical Allowance: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    Employee emp(123, "John Doe", 50000);
    emp.displayDetails();
    return 0;
}
