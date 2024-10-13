//Prgram to add two complex numbers using operator overloading

#include <iostream>
using namespace std;

class complex {
private:
    int x, y;
public:
    void getData(int real, int imag);
    void display();
    complex operator+(const complex& other){
    complex c;
    c.x = x+other.x;
    c.y = y+other.y;
    return c;
} 
};

void complex::getData(int real, int imag) {
    x = real;
    y = imag;
}

void complex::display() {
    cout << "The value of real part is: " << x << endl;
    cout << "The value of imaginary part is: " << y << endl;
}



int main() {
    int a, b;
    complex emp1, emp2;
    cout << "Enter the real part for emp1: ";
    cin >> a;
    cout << "Enter the imag part for emp1: ";
    cin >> b;
    emp1.getData(a, b);

    cout << "Enter the real part for emp2: ";
    cin >> a;
    cout << "Enter the imag part for emp2: ";
    cin >> b;
    emp2.getData(a, b);

    cout << "Binary Addition: " << endl;
    complex cc = emp1+emp2;
    cc.display();

    return 0;
}
