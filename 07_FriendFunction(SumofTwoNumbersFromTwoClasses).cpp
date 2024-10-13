//Program to ffind sum of two numbers from 2 classes using friends function

#include <iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void getdata(){
        cout<<"Enter the first no. : ";
        cin>>x;
    }
    friend void greatest(A,B);
};
class B{
    int y;
    public:
    void getdata(){
        cout<<"Enter the second no. : ";
        cin>>y;
    }
    friend void greatest(A,B);
};
void greatest(A a,B b){
    if (a.x>b.y){
        cout<<a.x<<" is the greatest number."<<endl;
    }
    else{
        cout<<b.y<<" is the gratest number."<<endl;
    }
}
int main(){
    cout<< "Program by KunalSharma_CSE-A_011:"<<endl;
    cout<< "A Program to give the greatest of the two numbers from two different classes by friedn function:"<< endl;
    A a;
    a.getdata();
    B b;
    b.getdata();
    greatest(a, b);
    return 0;
}