//n inline function is one for which the compiler copies the code from the function definition directly 
//into the code of the calling function rather than creating a separate set of instructions in memory

//NO OVERHEAD FUNCTION CALLS

//only for function with 1 line of code
#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b) ? a : b;
}

int main(){

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);

    cout << "Max of two values is : " << ans;

    return 0;
}