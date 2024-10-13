#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n1, n2, limit;

public:
    // Default constructor to initialize the first two numbers
    Fibonacci(int l) {
        n1 = 0;
        n2 = 1;
        limit = l;
    }

    // Copy constructor
    Fibonacci(const Fibonacci &f) {
        n1 = f.n1;
        n2 = f.n2;
        limit = f.limit;
    }

    // Function to generate Fibonacci series
    void generate() {
        int nextTerm;
        cout << n1 << " " << n2 << " "; // Print the first two terms
        for (int i = 2; i < limit; i++) {
            nextTerm = n1 + n2;
            cout << nextTerm << " ";
            n1 = n2;
            n2 = nextTerm;
        }
        cout << endl;
    }
};

int main() {
    cout<<"Program by Kunal_Sharma_011_CSE-A"<<endl;
    int num;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;

    Fibonacci fib1(num);    // Creating an object using constructor
    Fibonacci fib2 = fib1;  // Creating another object using copy constructor

    cout << "Fibonacci series generated by fib1:\n";
    fib1.generate();

    cout << "Fibonacci series generated by fib2 (copy constructor):\n";
    fib2.generate();

    return 0;
}
