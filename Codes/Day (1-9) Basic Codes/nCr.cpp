/*WAP to calculate value of nCr
    nCr = n!/r!*(n-r)! */

#include<iostream>
using namespace std;

//first function to calculate factorial of given number n
int factorial(int n){
    int fact = 1;
    for (int i = 1 ; i<=n; i++){
     fact = fact * i;
}
return fact;
}
//second function to calculate nCr using first function of factorial
int nCr(int n, int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);

    return num/den;
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<"Answer is"<<endl<<nCr(n,r)<<endl;
    return 0;
}