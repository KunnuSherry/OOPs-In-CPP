#include <iostream>
using namespace std;

class Outer {
private:
    int outerData;

public:
    // Constructor for Outer class
    Outer(int data) : outerData(data) {}

    // Nested class
    class Inner {
    private:
        int innerData;

    public:
        // Constructor for Inner class
        Inner(int data) : innerData(data) {}

        // Method to display inner data
        void displayInner() {
            cout << "Inner Data: " << innerData << endl;
        }

        // Method to access outer class data
        void accessOuterData(Outer& outer) {
            cout << "Accessing Outer Data: " << outer.outerData << endl;
        }
    };

    // Method to create and use Inner class
    void createInner(int data) {
        Inner inner(data);
        inner.displayInner();
        inner.accessOuterData(*this);
    }
};

int main() {
    Outer outer(10);  // Create an instance of Outer
    outer.createInner(20);  // Create an instance of Inner and access data

    return 0;
}
