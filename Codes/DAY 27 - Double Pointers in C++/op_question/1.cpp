#include<iostream>
using namespace std;

void swap(char *x, char *y){
    char *t = x;
    x = y;
    y = t;
}


int main(){
    char *x = "ninjaquiz";
    char *y = "codingninjas";    
    char *t;
    swap(x,y);
    cout << x << " " << y;
    t = x;
    x = y;
    y = t;
    cout << " " << x << " " << y;
    return 0;
}