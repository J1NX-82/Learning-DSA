/*
D
C D
B C D
A B C D 
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
            char start = 'A' + n - row;
            while (col<=row)
            {
                cout<<start;
                start+=1;
                col+=1;
            }
        cout<<endl;    
        row+=1;
            
    }
    
    return 0;
}