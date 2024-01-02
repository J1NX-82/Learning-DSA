#include<iostream>
using namespace std;

int getFibonacci(int n){
    
    // Base case
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    
    // Recursive call
    int ans = getFibonacci(n-2) + getFibonacci(n - 1); 
    return ans;
}

int main(){
    
    int n;
    cout << "Enter number to calculate fibonacci for : " << endl;
    cin >> n;

    cout << getFibonacci(n);

    return 0;
}