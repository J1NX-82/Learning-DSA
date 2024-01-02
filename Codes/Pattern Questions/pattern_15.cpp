/*
A
B B
C C C
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    int row = 1;

    while (row<=n)
    {  int col = 1;
           while (col<=row)
           {
            char ch = ('A' + col - 1);
            cout<<ch;
            col+=1;
           }
        cout<<endl;
        row+=1;
        
    }
    
    return 0;
}