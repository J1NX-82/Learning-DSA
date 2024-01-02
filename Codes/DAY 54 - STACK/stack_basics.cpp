// Stack is a linear data structure that follow LIFO or FILO order.
    // LIFO = Last In First Out
    // FILO = First In Last Out


#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // properties
    public:
    int *arr;
    int top;
    int size;


    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);
    st.push(22);
    st.push(49);
    st.push(44);

    cout << "Before popping, the last element of stack is :" << st.peek() << endl;
    st.pop();
    cout << "After popping, the last element of stack is :" << st.peek() << endl;
    // // creation of stack
    // stack<int> s;

    // // push operation
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // // pop operation 
    // s.pop();

    // // peeking or element at top
    // cout << "Element at top of stack is : " << s.top() << endl;

    // // Size of stack
    // cout << "Size of stack is : " << s.size() << endl;

    // //to check whether empty or not 
    // if(s.empty()){
    //     cout<<"Stack is Empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is Not Empty"<<endl;
    // }


    return 0;
}