//WAP to find sum of all even nos from 1 to n
#include<iostream>

using namespace std;
int main(){
    int n;
    int i=2;
    int sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    while (i<=n)
    {
        sum=sum+i;
        i+=2;
    }
    cout<<"The sum of all even nos from 1 to n is"<<sum<<endl;

    return 0;
}


