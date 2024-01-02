#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    for(int i : s){
        cout << i <<endl;
    }   

    //erasing content
    cout << "After erasing : " << endl;
    s.erase(s.begin());
    for(int i : s){
        cout << i <<endl;
    }   
    cout << endl;

    //check whether element present or not
    cout << " 5 is present or not -->"  << s.count(5) << endl;


    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it!=s.end(); it++){
        cout << *it << endl;
    }cout << endl;
    
    return 0;
}