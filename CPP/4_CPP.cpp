#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string bname;
        int id;
        string author;
        double price;

    public:
        // Default constructor
        Book() {
            bname = "";
            id = 0;
            author = "";
            price = 0.0;
        }

        // Parameterized constructor
        Book(string name, int bookId, string bookAuthor, double bookPrice) {
            bname = name;
            id = bookId;
            author = bookAuthor;
            price = bookPrice;
        }

        // Getter functions
        string getBname() {
            return bname;
        }

        int getId() {
            return id;
        }

        string getAuthor() {
            return author;
        }

        double getPrice() {
            return price;
        }

        // Setter functions
        void setBname(string name) {
            bname = name;
        }

        void setId(int bookId) {
            id = bookId;
        }

        void setAuthor(string bookAuthor) {
            author = bookAuthor;
        }

        void setPrice(double bookPrice) {
            price = bookPrice;
        }

        // Display function
        void display() {
            cout << "Book Name: " << bname << endl;
            cout << "Book ID: " << id << endl;
            cout << "Book Author: " << author << endl;
            cout << "Book Price: $" << price << endl;
        }
};

int main() {
    // Create object using default constructor
    Book book1;

    // Set values using setter functions
    book1.setBname("The Great Gatsby");
    book1.setId(12345);
    book1.setAuthor("F. Scott Fitzgerald");
    book1.setPrice(12.99);

    // Display values using getter functions and display() function
    cout << "Values of book1:" << endl;
    cout << "Book Name: " << book1.getBname() << endl;
    cout << "Book ID: " << book1.getId() << endl;
    cout << "Book Author: " << book1.getAuthor() << endl;
    cout << "Book Price: $" << book1.getPrice() << endl;
    book1.display();

    // Create object using parameterized constructor
    Book book2("To Kill a Mockingbird", 67890, "Harper Lee", 9.99);

    // Display values using getter functions and display() function
    cout << "\nValues of book2:" << endl;
    cout << "Book Name: " << book2.getBname() << endl;
    cout << "Book ID: " << book2.getId() << endl;
    cout << "Book Author: " << book2.getAuthor() << endl;
    cout << "Book Price: $" << book2.getPrice() << endl;
    book2.display();

    return 0;
}
