// Write a program to find the factorial of a number using constructor

#include <iostream>
using namespace std;

class factorial{
    private:
    int n;
    public:
    factorial(int num){
        n=num;
        int ans =1;
        for(int i=1; i<=n; i++){
            ans = ans*i;
        }
        cout<<"Factorial of "<< n << " is: "<< ans << endl;
    }
};

int main(){
    cout<<"Program by Kunal_sharma_011_CSE-A"<<endl;
    int a;
    cout<<"Enter a number to find the factorial of: ";
    cin>>a;
    factorial f(a);
}