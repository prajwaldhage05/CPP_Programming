#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int rollno;
        float marks1, marks2, marks3;
        float total, percentage;
        char grade;

    public:
        void acceptInfo() {
            cout << "Enter Roll Number: ";
            cin >> rollno;
            cout << "Enter Marks of Subject 1: ";
            cin >> marks1;
            cout << "Enter Marks of Subject 2: ";
            cin >> marks2;
            cout << "Enter Marks of Subject 3: ";
            cin >> marks3;
        }

        void calculate() {
            total = marks1 + marks2 + marks3;
            percentage = (total / 300) * 100;

            if (percentage >= 90) {
                grade = 'A';
            }
            else if (percentage >= 80 && percentage < 90) {
                grade = 'B';
            }
            else if (percentage >= 70 && percentage < 80) {
                grade = 'C';
            }
            else if (percentage >= 60 && percentage < 70) {
                grade = 'D';
            }
            else if (percentage >= 50 && percentage < 60) {
                grade = 'E';
            }
            else {
                grade = 'F';
            }
        }

        void display() {
            cout << "Roll Number: " << rollno << endl;
            cout << "Marks of Subject 1: " << marks1 << endl;
            cout << "Marks of Subject 2: " << marks2 << endl;
            cout << "Marks of Subject 3: " << marks3 << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student s;
    s.acceptInfo();
    s.calculate();
    s.display();
    return 0;
}
