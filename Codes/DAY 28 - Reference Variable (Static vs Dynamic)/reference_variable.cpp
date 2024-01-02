#include<iostream>
using namespace std;

//pass by value : (a copy of the variable is created )
void valUpdate(int n){
    n++;
}

//pass by reference : (actual variable is used)
void refUpdate(int& n){
    n++;
}

int main(){
    
    int i = 5;
    int n = 5;
    //creating a reference variable 
    int&j = i;

    cout << i <<endl;
    i++;
    cout << j <<endl;
    i++;
    cout << i <<endl;

    cout << "Before update in pass by value :" << n << endl;
    valUpdate(n);
    cout << "After update in pass by value :" << n << endl << endl;

    cout << "Before update in pass by reference :" << n << endl;
    refUpdate(n);
    cout << "After update in pass by reference :" << n << endl;

    return 0;
}