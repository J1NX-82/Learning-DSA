/*  ***
    ***
    ***
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int i=0;
    while (i<n){  
    int j=0;
        while (j<n)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        
        i+=1;
    }
    
    return 0;
}