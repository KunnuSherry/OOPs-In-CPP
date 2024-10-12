// A Program to overload pre-increment operator ++

#include <iostream>
using namespace std;

class Employee {
private:
    int x, y;
public:
    void getData(int a, int b);
    void display();
    void operator++(); // Increment operator
};

void Employee::getData(int a, int b) {
    x = a;
    y = b;
}

void Employee::display() {
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
}

void Employee::operator++() {
    cout << "++ Operator is increasing the value by 10" << endl;
    x = x + 10;
    y = y + 10;
}

int main() {
    int a, b;
    Employee emp1;
    cout << "Enter the first Number for emp1: ";
    cin >> a;
    cout << "Enter the second Number for emp1: ";
    cin >> b;
    emp1.getData(a, b);

    cout << "Output Before Increment Operator:" << endl;
    emp1.display();
    ++emp1;
    cout << "Output After Increment Operator:" << endl;
    emp1.display();

    return 0;
}
