#include<iostream>
using namespace std;

// assigning string by pass by reference (actual string is passed) 
void reverseString(string& str, int i, int j){
    // base case 
    if(i > j){
        return;
    }

    // progression
    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    reverseString(str, i, j);
}

int main(){
    string name = "abcdef";
    reverseString(name, 0, 6);
    cout << name << endl;

    return 0;
}