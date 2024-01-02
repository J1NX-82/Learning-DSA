#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("Sweata");
    s.push("Chakraborty");
    s.push("Neha");

    cout << "Top Element :  " << s.top() << endl;
    s.pop();
    cout << "Top Element :  " << s.top() << endl;

    //size of stack
    cout << "Size of stack : " <<s.size() << endl;

    return 0;
}