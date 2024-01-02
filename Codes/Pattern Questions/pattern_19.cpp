/* WAP to print the following patter for input value of n = 4 
            *
        *   *
    *   *   *
*   *   *   *

HINT : One while loop will print space between characters and the other one will print the asterisk.

*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    
    while(row<=n){

        //space print karlo
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        // ab stars print kar lo
        int col = 1;
        while (col<=row)
        {
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;        
    }

    return 0;
}