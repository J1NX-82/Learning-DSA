#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int>& s, int x) {
    // Base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Recursive case
    int num = s.top();
    s.pop();

    
    insertAtBottom(s, x);
    s.push(num);
}

void pushAtBottom(stack<int>& myStack, int x) {
    insertAtBottom(myStack, x);
}

int main() {
    stack<int> myStack;

    // Push some elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    int x = 4;

    cout << "Original Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    cout << endl;

    // Call pushAtBottom to push 'x' at the bottom of the stack
    pushAtBottom(myStack, x);

    cout << "Stack after pushing " << x << " at the bottom: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    cout << endl;

    return 0;
}
