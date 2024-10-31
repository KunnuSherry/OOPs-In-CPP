#include<iostream>
using namespace std;

template <class t>
class Compare{
    //data members
    private:
    t n1, n2;
    
    //member functions
    public:
    
    //constructor
    Compare(t a, t b){
        cout<<"Constructor is Called, Taking values: "<<a<<","<<b<<endl;
        n1=a;
        n2=b;
    }
    
    //special function
    t big(){
        return (n1>n2)?n1: n2;
    }
    
    //destructor
    ~Compare(){A
        cout<< "Destructor is called"<<endl;
    }
    
};
int main(){
    Compare <int> obj1(34,45);
    cout<< "The Bigger of the two Numbers is : "<<obj1.big()<<endl;
}
