#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    //copying a new list 
    list<int> n(l);

    l.push_back(1);
    l.push_front(2);

    for (int i : l){
        cout << i << " ";
    }
    cout << endl;

    //to delete or erase an item 
    l.erase(l.begin());
    cout << "after erase" << endl;
    
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    //finding size
    cout << "Size of List : " << l.size() << endl;

    return 0;
}