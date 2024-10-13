//A Program to get and set the employee details

#include<iostream>
using namespace std;

class employee{
    private: 
    char name[20];
    int age;
    int salary;
    string address;
    public:
    void getData();
    void displayData();
}emp;

inline void employee::getData(){
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter salary: "<<endl;
    cin>>salary;
    cout<<"Enter address: "<<endl;
    cin>>address;
}

inline void employee::displayData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Address: "<<address<<endl;

} 

int main(){
    cout<<"Kunal Sharma"<<endl;
    cout<<"Enter The details: "<<endl;
    emp.getData();
    cout<<"The data is the following: "<<endl;
    emp.displayData();
}