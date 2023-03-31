#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string city;

    public:
        // Default constructor
        Person() {
            name = "";
            age = 0;
            city = "";
        }

        // Parameterized constructor
        Person(string n, int a, string c) {
            name = n;
            age = a;
            city = c;
        }

        // Getter functions
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        string getCity() {
            return city;
        }

        // Setter functions
        void setName(string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }

        void setCity(string c) {
            city = c;
        }

        // Display function
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "City: " << city << endl;
        }
};

int main() {
    // Create object using default constructor
    Person p1;

    // Set values using setter functions
    p1.setName("John");
    p1.setAge(25);
    p1.setCity("New York");

    // Display values using getter functions and display() function
    cout << "Values of p1:" << endl;
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "City: " << p1.getCity() << endl;
    p1.display();

    // Create object using parameterized constructor
    Person p2("Alice", 30, "London");

    // Display values using getter functions and display() function
    cout << "\nValues of p2:" << endl;
    cout << "Name: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
    cout << "City: " << p2.getCity() << endl;
    p2.display();

    return 0;
}
