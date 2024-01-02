/*
A
B C
C D E
D E F G
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
            while(j<=i){
                char value = 'A' + i + j -2;
                cout<<value;
                value+=1;
                j+=1;
            }
        cout<<endl;
        i+=1;
    }
    
    return 0;
}