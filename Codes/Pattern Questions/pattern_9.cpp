/*  for input value of n =4
1
21
321
4321
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
        while(col<=row){
            cout<<row-col+1<<" ";
            col+=1;
       }
    cout<<endl;
    row+=1;
    }
    
    return 0;
}