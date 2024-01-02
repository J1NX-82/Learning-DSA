/*
A B C
B C D
D E F
*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n)
    {   int col = 1;
           while (col<=n)
           {
            char ch = 'A' + row + col - 2;
            cout<<ch;
            col+=1;
           }
           row+=1;
           cout<<endl;
    }
    
    return 0;
}