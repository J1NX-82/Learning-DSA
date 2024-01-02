#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    //to add element from back
    d.push_back(1);
    //to add element from front
    d.push_front(3);
    d.push_front(5);

    for (int i : d){
        cout << i << " ";
    }
    cout << endl;
    //to remove an element from the back
    d.pop_back();

    cout <<"After popping from back" << endl;
    for (int i : d){
        cout << i << " " << endl;
    }

    //to find position of element at an index
    cout << "First index element is : " << d.at(1) << endl;

    //to print front element
    cout << "Front element is : " << d.front() << endl;

    //to print back element
    cout << "Back element is : " << d.back() << endl;

    //to empty the deque
    cout << "Empty or not : " << d.empty() << endl;

    //to erase the deque
    cout <<" Before erasing : " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout <<" After erasing : " << d.size() << endl;


    return 0;

}