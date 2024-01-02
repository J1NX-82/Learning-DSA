/* for input n=4
   *
   **
   ***
   ****
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
    
    return 0;
}