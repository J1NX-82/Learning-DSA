#include<iostream>
using namespace std;
#define PI 3.14
//MACRO - A piece of code in a program replaced by a macro
//BENEFIT - Doesn't takes up any memory in program

int main(){
    int r = 5;
    // double pi = 3.14;
    int area = PI * r * r;

    cout << "area is :" << area << endl;
    return 0;
}