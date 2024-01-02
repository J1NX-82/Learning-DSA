/* WAP to print the following patterns for the given value of n = 4
    ****
     ***
      **
       *
*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n)
    {   int space = 1;
        int col = 1;
            while (space<row)
            {
                cout<<" ";
                space+=1;
            }     
                while (col<=n-row+1)
                    {
                        cout<<"*";
                        col+=1;
                    }
        cout<<endl;    
        row+=1;
            
    }
    
    return 0;
}