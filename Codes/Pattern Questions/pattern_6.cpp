/* for input of n =4
   1 
   2 2
   3 3 3
   4 4 4 4

*/

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;

    while (row<=n)
    {    int col=1;
        while (col<=row)
        {
            cout<<row;
            col+=1;
        }
    cout<<endl;
    row+=1;
    }
    

    return 0;
}