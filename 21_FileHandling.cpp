#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    char name[50];
    int age;
    char sex;
    float height;
    float weight;

    // Function to get student details from the user
    void getInput() {
        cout << "Enter name: ";
        cin.ignore(); // To ignore any leftover newline character from previous input
        cin.getline(name, 50); // Using getline to handle full names with spaces

        cout << "Enter age: "; 
        cin >> age;

        cout << "Enter sex (M/F): "; 
        cin >> sex;

        cout << "Enter height: "; 
        cin >> height;

        cout << "Enter weight: "; 
        cin >> weight;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main() {
    Student student;

    // Get student info from user
    student.getInput();

    // Write student info to a file using fout
    ofstream fout("student.txt", ios::out);
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    fout.write((char*)&student, sizeof(student));
    fout.close();

    // Read the student info back from the file using fin
    ifstream fin("student.txt", ios::in);
    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    fin.read((char*)&student, sizeof(student));
    
    // Display the student info
    cout << "\nStudent Information from File:" << endl;
    student.display();
    fin.close();

    return 0;
}
