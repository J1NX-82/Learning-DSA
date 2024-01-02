/*  for input value of n = 3

A B C
A B C 
A B C
A B C 
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
  
    while (row<=n)
    {
        int col = 1;
        while(col<=n){
            char ch = 'A' + col - 1;
            cout<<ch<<" ";
            col+=1;
       }
    cout<<endl;
    row+=1;
    }
    
    return 0;
}