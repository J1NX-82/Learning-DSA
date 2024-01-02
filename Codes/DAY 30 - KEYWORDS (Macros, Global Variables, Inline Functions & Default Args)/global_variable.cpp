// ! NOTE: Don't Use global variable because it can be changed in any function
// ! BAD PRACTICE
// ! Avoid

#include<iostream>
using namespace std;

//GLOBAL VARIABLE - scope throughout the program
int lmao = 69;
//Here int lmao = 69; is a global variable

void a(int& i){
    cout << "Lmao Index in fun a : " << lmao << endl;
}

void b(int& i){
    cout << "Lmao Index in fun b : " << lmao << endl;
}


int main(){
    
    int i = 5;    
    cout << "Lmao Index in main : " << lmao << endl;
    a(i);
    b(i);
    return 0;
}