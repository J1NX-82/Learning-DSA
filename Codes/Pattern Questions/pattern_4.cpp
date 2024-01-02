/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
#include<iostream>

using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int count=1;

    while(i<=n){
        int j = 1;
            while(j<=n){
                cout<<count<<" ";
                count+=1;
                j+=1;}
        cout<<endl;
        i+=1;
    }

    return 0;
}