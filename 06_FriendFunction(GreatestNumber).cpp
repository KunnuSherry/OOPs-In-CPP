//Program to find out greatest of all numbers from friend function

#include <iostream>
using namespace std;
class test{
    private:
    int x, y, z;
    public:
    void input(){
        cout<<"\n Enter the numbers: ";
        cin>> x>>y>>z;
    }
    friend void find(test t);
};
    void find(test t){
        if(t.x>t.y && t.x>t.z){
            cout<<"\n "<< t.x << " is the greatest number";
        }
        else if(t.y>t.x && t.y>t.z){
            cout<<"\n "<< t.y << " is the greatest number";
        }
        else{
            cout<<"\n "<< t.z << " is the greatest number";
        }
    }

int main() {
    cout<<"\n Program by KUNAL_SHARMA_CSE-A_011";
    cout<<"\n This program is to find the largest number using friend function:";
    test t;
    t.input();
    find(t);
    return 0;
}