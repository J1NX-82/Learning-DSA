// WAP to find the copmliment of base 10 integer....
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int m = n; 
    int mask = 0;

    //covering the edge case scenario
    if(n==0){
        return 1;
    }

    while (m!=0)    
    {
        mask = (mask<<1) | 1; 
        m = m>>1; 
    }

        int ans = (~n) & mask;

    return ans;

}
