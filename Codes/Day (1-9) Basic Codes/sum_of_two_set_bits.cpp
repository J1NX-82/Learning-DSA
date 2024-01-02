/* wap to calculate sum of set bits of two numbers input by the user
    a = 2 == 10
    a = 2 == 11 

-->total number of set bits = 3 ===ans
*/
#include<iostream>
using namespace std;

int setBits(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
    n>>1;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the value of n<<endl;
    cin>>n>>endl;
    setBits(n);
    return 0;
}
