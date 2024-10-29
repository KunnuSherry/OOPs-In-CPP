#include <iostream>
using namespace std;

template <class t>

t square(t num){
    return num*num;
}

int main(){
    int a = 5;
    float b = 2.2f;
    double c = 6.6;
    cout<<"Square for integer data type "<< a<<" is "<<square(a)<<endl;
    cout<<"Square for float data type "<< b<<" is "<<square(b)<<endl;
    cout<<"Square for double data type "<< c<<" is "<<square(c)<<endl;
}