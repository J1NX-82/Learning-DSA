#include<iostream>
using namespace std;


//0 -> not a prime number
//1 -> a prime number 
bool isPrime(int n){
    
    for(int i = 2; i<=n ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the value for which you want to check whether the given number is prime"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"is not a prime number"<<endl;
    }
    return 0;
}