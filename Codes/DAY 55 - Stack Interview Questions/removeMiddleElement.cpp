#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void solve(stack<int>& inputStack, int count, int size) {
    // Base case
    if (count == size / 2) {
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    int N = myStack.size(); // Get the size of the stack

    cout << "Original Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    // Reinsert elements into the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    deleteMiddle(myStack, N);

    cout << "Stack after deleting middle element: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
