//A simple program to find the sum of two numbers using friend function

#include<iostream>
using namespace std;

class number{
    private:
    int x, y;
    public:
    number(int a, int b){
        x=a;
        y=b;
    }
    friend void sum(number n);
};
void sum(number n){
    cout<<"Sum of two numbers is: "<<n.x+n.y<<endl;
}
int main(){
    cout<<"Program by Kunal_Sharma_011_CSE-A"<< endl;
    int a,b;
    cout << "Enter the two Numbers: ";
    cin>>a>>b;
    number n(a,b);
    sum(n);
}