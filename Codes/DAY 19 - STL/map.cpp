//!Map always sorts 
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    //to initialize value to key 
    m[2] = "Sweata";
    m[4] = "Loves";
    m[6] = "Rahul";

    //another way to initialize value to key
    m.insert( {7, "Goala"});


    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}