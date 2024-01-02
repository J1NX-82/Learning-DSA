/*
A
B C
C D E
F G H I
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    char value = 'A';

    while (row<=n)
    {
        int col = 1;
            while (col<=row)
            {
                cout<<value<<" ";
                value+=1;
                col+=1;
            }
        cout<<endl;
        row+=1;
    }
    
    return 0;
}