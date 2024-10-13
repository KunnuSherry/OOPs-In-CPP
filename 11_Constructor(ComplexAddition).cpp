// Perform Complex Addition using constructor

#include <iostream>
using namespace std;

class complex{
    private:
    int r,c;
    public:
    complex(){
        r=0;
        c=0;
    }
    complex(int a){
        r=a;
        c=0;
    }
    complex(int a, int b){
        r=a;
        c=b;
    }
    friend void sum(complex c1, complex c2);
};

void sum(complex c1, complex c2){
    cout << "The sum of given complex numbers is: "<<c1.r+c2.r<<"i+ "<<c1.c+c2.c<<"j"<<endl;
}
int main(){
    cout<<"Program by Kunal_Sharma_011_CSE-A:"<<endl;
    complex c1;
    complex c2(3);
    complex c3(4,5);
    cout<<"Performing c1+c2:"<<endl;
    sum(c1,c2);
    cout<<"Performing c2+c3:"<<endl;
    sum(c2,c3);
    cout<<"Performing c1+c3:"<<endl;
    sum(c1,c3);
}
