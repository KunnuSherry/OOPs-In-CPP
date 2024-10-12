// Implement a class string containing the following functions:
// a. Overload + operator to carry out the concatenation of strings.
// b. Overload = operator to carry out string copy.
// c. Overload <= operator to carry out the comparison of strings.
// d. Function to display the length of a string.
// e. Function tolower( ) to convert upper case letters to lower case.
// f. Function toupper( ) to convert lower case letters to upper case.

#include <iostream>
#include <string>
#include <cctype>  // for tolower() and toupper()
using namespace std;

class String {
private:
    string str;
public:
    // Default constructor
    String() {}

    // Constructor to initialize the string
    String(string s) {
        str = s;
    }

    // Overloading the + operator for string concatenation
    String operator+(const String& other) {
        String str1(str + other.str);
        return str1;
    }

    // Overloading the = operator for assignment
    void operator=(const String& other) {
            str = other.str;
    }

    // Overloading the <= operator for comparison
    bool operator<=(const String& other) {
        return str <= other.str;
    }

    // Function to calculate the length of the string
    int length() {
        int i=0 ;
        while(str[i]!='\0'){
            i++;
        }
        return i-1;
    }

    // Function to convert to lower case
    void toLower() {
        string lowerStr = str; 
        for (char &c : lowerStr) {
            c = tolower(c);  
        }
        cout << "In Lower Case: " << lowerStr << endl;
    }

    // Function to convert to upper case
    void toUpper() {
        string upperStr = str; 
        for (char &c : upperStr) {
            c = toupper(c);  
        }
        cout << "In Upper Case: " << upperStr << endl;
    }

    // Function to display the string
    void display() {
        cout << str;
    }
};

int main() {
    String a("Kunal ");
    String b("Sharma");
    String c;

    cout << "Concatenation of two strings a and b is: ";
    String d = a + b;
    d.display();
    cout << endl; 

    cout << "Copying the value of a in c: c is: " << endl;
    c = a;
    c.display();
    cout << endl; 

    cout << "Comparing a and b: " << (a <= b) << endl;

    cout << "Length of a: " << a.length() << endl;

    a.toLower();
    a.toUpper();

    return 0;
}
