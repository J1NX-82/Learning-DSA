// instead of using for loop and adding the power equal to the power time
// What we did was
// made two condition 
// if power is even ans = a^b/2 * a^b/2
// if power is odd ans=((a^b/2 * a^b/2) * a

#include<iostream>
using namespace std;

int power(int a, int b){
    // base case
    if( b == 0){
        return 1;
    }
    else if( b == 1){
        return a;
    }

    // recursive call
    int ans = power(a , b/2);

    // in case of even power
    if(b%2 == 0){
        return (ans * ans );
    }   
    // in case of odd power
    else{
        return ((ans*ans) * a ) ;
    }
}

int main(){
    int a, b;
    cout << "Enter the value of a and b :" <<endl;
    cin >> a >> b;

    int ans = power(a,b); 

    cout << "Answer is : " << ans << endl;
    return 0;
}