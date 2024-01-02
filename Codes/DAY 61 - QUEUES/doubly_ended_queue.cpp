#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_front(12);
    d.push_back(13);

    cout << "Element present in the front : " << d.front() << endl;
    cout << "Element present at the back : " << d.back() << endl;

    d.pop_front();

    cout << "Element present in the front : " << d.front() << endl;
    cout << "Element present at the back : " << d.back() << endl;

    d.pop_back();

    if(d.empty()){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
}