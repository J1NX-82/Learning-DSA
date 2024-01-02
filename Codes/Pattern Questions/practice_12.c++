/* for input value of n=3
A B C
D E F
G H I 
*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    char start = 'A';
    while(row<=n){
        int col = 1;
        while (col<=n)
        {
            cout<<start<<" ";
            start+=1;
            col+=1;
        }
    cout<<endl;
    row+=1;
    }
    return 0;
}