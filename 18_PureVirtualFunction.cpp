// Create a class called LIST with two pure virtual function store() and retrieve().To store a value call store and to retrieve call retrieve function. Derive two classes stack and queue from it and override store and retrieve. 

#include <iostream>
using namespace std;

class LIST {
public:
    virtual void store(int value) = 0;     
    virtual void retrieve() = 0;            
};

class stack : public LIST {
private:
    int top;
    int* st;
    int size;

public:
    stack(int s) {
        size = s;
        top = -1;
        st = new int[size];
    }

    ~stack() { 
        delete[] st;
    }

    void store(int value)  { 
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        st[top] = value;
        cout << value << " entered at position " << top << endl;
    }

    void retrieve()  { 
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << st[top] << " is popped" << endl;
        top--;
    }
};

class queue : public LIST {
private:
    int rear;
    int front;
    int* q;
    int size;

public:
    queue(int s) {
        size = s;
        rear = -1;
        front = -1;
        q = new int[size];
    }

    ~queue() {
        delete[] q;
    }

    void store(int value)  { 
        if (rear == size - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        if (front == -1) {
            front = 0; // 
        }
        q[rear] = value;
        cout << value << " added to queue." << endl;
    }

    void retrieve()  { 
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        int value = q[front++];
        cout << "Retrieved from queue: " << value << endl;
    }
};

int main() {
    LIST* myStack = new stack(5);
    LIST* myQueue = new queue(5);

    // Stack operations
    cout<<"Stack Operations: \n";
    myStack->store(10);
    myStack->store(20);
    myStack->store(30);
    myStack->retrieve();
    myStack->retrieve();
    myStack->retrieve();
    myStack->retrieve();
    cout<<endl;// Testing stack underflow

    // Queue operations
    cout<<"Queue Operations: \n";
    myQueue->store(100);
    myQueue->store(200);
    myQueue->retrieve();
    myQueue->retrieve();
    myQueue->retrieve(); 
    cout<<endl;// Testing queue underflow

    // Clean up
    delete myStack;
    delete myQueue;

    return 0;
}
