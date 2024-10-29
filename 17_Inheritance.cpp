// Aim: Design three classes STUDENT, EXAM and RESULT. The STUDENT class has data members such as rollno, name. create a class EXAM by inheriting the STUDENT class. The EXAM class adds data members representing the marks scored in six subjects. Derive the RESULT from the EXAM class and has its own data members such as totalmarks. Write a program to model this relationship

#include <iostream>
#include <string>
using namespace std;

class student {
    // Data members
protected:
    int rollno;
    string name;

public:
    // Setter methods
    void setRollNo(int rno) {
        rollno = rno;
    }

    void setName(string n) {
        name = n;
    }

    void displayInfo() {
        cout << "Student's Name is: " << name << endl;
        cout << "Student's Roll Number is: " << rollno << endl;
    }
};

class exam : public student { // Public inheritance
    // Data members
protected:
    int eng;
    int hin;
    int maths;

public:
// Setter methods for marks
 void setMarks(int e, int h, int m) {
 eng = e;
 hin = h;
 maths = m;
 }
 void displayMarks() {
 cout << "English Marks: " << eng << endl;
 cout << "Hindi Marks: " << hin << endl;
 cout << "Maths Marks: " << maths << endl;
 }
};
class result : public exam { // Public inheritance
 // Data member
private:
 int tmarks;
public:
 void calculateTotal() {
 tmarks = eng + hin + maths; // Accessing protected members from exam
 }
 void displayTotal() {
 cout << "Total marks of Student is: " << tmarks << endl;
 }
};
int main() {
 int rollno, engMarks, hinMarks, mathsMarks;
 string studentName;
 // Input details
 cout << "Enter Roll Number: ";
 cin >> rollno;
 cout << "Enter Student Name: ";
 cin.ignore(); // Clear the newline character from the input buffer
 getline(cin, studentName); // Use getline for string input
 cout << "Enter English Marks: ";
 cin >> engMarks;
 cout << "Enter Hindi Marks: ";
 cin >> hinMarks;
 cout << "Enter Maths Marks: ";
 cin >> mathsMarks;
 // Create result object
 result res;
 // Set values using setter methods
 res.setRollNo(rollno);
 res.setName(studentName);
 res.setMarks(engMarks, hinMarks, mathsMarks);
 res.calculateTotal(); // Calculate total marks
 // Display information
 res.displayInfo();
 res.displayMarks();
 res.displayTotal();
 return 0;
}