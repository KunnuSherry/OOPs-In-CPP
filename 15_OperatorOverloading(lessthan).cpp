// A Program to overload less-than operator (<)

#include <iostream>
using namespace std;

class Employee {
private:
    int x, y;
public:
    void getData(int a, int b);
    void display();
    bool operator< (const Employee& other); // Less than operator
};

void Employee::getData(int a, int b) {
    x = a;
    y = b;
}

void Employee::display() {
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
}

bool Employee::operator< (const Employee& other) {
    return (x < other.x) && (y < other.y);
}

int main() {
    int a, b;
    Employee emp1, emp2;
    cout << "Enter the first Number for emp1: ";
    cin >> a;
    cout << "Enter the second Number for emp1: ";
    cin >> b;
    emp1.getData(a, b);

    cout << "Enter the first Number for emp2: ";
    cin >> a;
    cout << "Enter the second Number for emp2: ";
    cin >> b;
    emp2.getData(a, b);

    cout << "Comparing emp1 < emp2: " << (emp1 < emp2) << endl;

    return 0;
}
