#include <iostream>
using namespace std;

class Date {
    private:
        int dd;
        int mm;
        int yy;

    public:
        // Default constructor
        Date() {
            dd = 0;
            mm = 0;
            yy = 0;
        }

        // Parameterized constructor
        Date(int d, int m, int y) {
            dd = d;
            mm = m;
            yy = y;
        }

        // Getter functions
        int getDay() {
            return dd;
        }

        int getMonth() {
            return mm;
        }

        int getYear() {
            return yy;
        }

        // Setter functions
        void setDay(int d) {
            dd = d;
        }

        void setMonth(int m) {
            mm = m;
        }

        void setYear(int y) {
            yy = y;
        }

        // Display function
        void display() {
            cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
        }
};

int main() {
    // Create object using default constructor
    Date d1;

    // Set values using setter functions
    d1.setDay(16);
    d1.setMonth(3);
    d1.setYear(2023);

    // Display values using getter functions and display() function
    cout << "Values of d1:" << endl;
    cout << "Day: " << d1.getDay() << endl;
    cout << "Month: " << d1.getMonth() << endl;
    cout << "Year: " << d1.getYear() << endl;
    d1.display();

    // Create object using parameterized constructor
    Date d2(17, 3, 2023);

    // Display values using getter functions and display() function
    cout << "\nValues of d2:" << endl;
    cout << "Day: " << d2.getDay() << endl;
    cout << "Month: " << d2.getMonth() << endl;
    cout << "Year: " << d2.getYear() << endl;
    d2.display();

    return 0;
}
