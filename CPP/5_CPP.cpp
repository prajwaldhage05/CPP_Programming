#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;

    public:
        // Default constructor
        Point() {
            x = 0;
            y = 0;
        }

        // Parameterized constructor
        Point(int xCoord, int yCoord) {
            x = xCoord;
            y = yCoord;
        }

        // Getter functions
        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        // Setter functions
        void setX(int xCoord) {
            x = xCoord;
        }

        void setY(int yCoord) {
            y = yCoord;
        }

        // Display function
        void display() {
            cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
        }
};

int main() {
    // Create object using default constructor
    Point point1;

    // Set values using setter functions
    point1.setX(5);
    point1.setY(10);

    // Display values using getter functions and display() function
    cout << "Values of point1:" << endl;
    cout << "X coordinate: " << point1.getX() << endl;
    cout << "Y coordinate: " << point1.getY() << endl;
    point1.display();

    // Create object using parameterized constructor
    Point point2(3, -2);

    // Display values using getter functions and display() function
    cout << "\nValues of point2:" << endl;
    cout << "X coordinate: " << point2.getX() << endl;
    cout << "Y coordinate: " << point2.getY() << endl;
    point2.display();

    return 0;
}
