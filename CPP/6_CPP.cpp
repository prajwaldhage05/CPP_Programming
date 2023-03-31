#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double img;

    public:
        // Default constructor
        Complex() {
            real = 0;
            img = 0;
        }

        // Parameterized constructor
        Complex(double realPart, double imgPart) {
            real = realPart;
            img = imgPart;
        }

        // Getter functions
        double getReal() {
            return real;
        }

        double getimg() {
            return img;
        }

        // Setter functions
        void setReal(double realPart) {
            real = realPart;
        }

        void setimg(double imgPart) {
            img = imgPart;
        }

        // Display function
        void display() {
            cout << "Complex number: " << real << " + " << img << "i" << endl;
        }
};

int main() {
    // Create object using default constructor
    Complex num1;

    // Set values using setter functions
    num1.setReal(3.5);
    num1.setimg(-2.8);

    // Display values using getter functions and display() function
    cout << "Values of num1:" << endl;
    cout << "Real part: " << num1.getReal() << endl;
    cout << "img part: " << num1.getimg() << endl;
    num1.display();

    // Create object using parameterized constructor
    Complex num2(2.0, 4.5);

    // Display values using getter functions and display() function
    cout << "\nValues of num2:" << endl;
    cout << "Real part: " << num2.getReal() << endl;
    cout << "img part: " << num2.getimg() << endl;
    num2.display();

    return 0;
}
