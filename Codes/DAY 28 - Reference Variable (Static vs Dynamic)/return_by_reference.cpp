//! BAD PRACTICE 

#include<iostream>
using namespace std;

int& fun(int a){
    int num = a;
    int& ans = num;
    return ans;
}

int main(){
    int n = 5;
    fun(n);
    return 0;
}