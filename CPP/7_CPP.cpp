#include <iostream>
using namespace std;

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

int main() {
    // Create object using default constructor
    Date date1;

    // Display date using display() function
    cout << "Date 1: ";
    date1.display();

    // Create object using parameterized constructor
    Date date2(10, 3, 2023);

    // Display date using display() function
    cout << "Date 2: ";
    date2.display();

    return 0;
}
