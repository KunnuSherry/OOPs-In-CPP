#include <iostream>
using namespace std;

void pri(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int index, value;
    int array[6] = {1,2,3,4,5,6};
    cout<<"Initial Array: "<<endl;
    pri(array,6);
    cout<<"Enter The Index To Be Edited:";
    cin>>index;
    try{
        if(index>5){
            throw index;
        }
        else{
            cout<<"Enter the value to be entered at index "<<index<<" :";
            cin>>value;
            array[index]=value;
        }
    }
    catch(int x){
        cout<<"Array Index out of bounds!"<<endl;
    }
    cout<<"Final Array: "<<endl;
    pri(array,6);
}
