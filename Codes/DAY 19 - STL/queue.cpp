#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Sweata");
    q.push("Chakraborty");
    q.push("Rahul");
    q.push("Goala");
    //size 
    cout << "Size b4 pop : " << q.size() << endl;
    
    cout << " First : " << q.front() << endl;
    q.pop();
    cout << " First after 1st pop : " << q.front() << endl;
    q.pop();
    cout << " First after 2nd pop : " << q.front() << endl;

    cout << "Size after pop : " << q.size() << endl;

    return 0;
}