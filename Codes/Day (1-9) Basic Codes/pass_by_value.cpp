#include<iostream>
using namespace std;

void update(int a){
    a = a/2;
}

int main(){
    int a = 10;
    update(a);
    cout<<a<<endl;  
    return 0;
}


// int update(int a){
//     int ans = a*a;
//     return ans;
// }

// int main(){
//     int a = 14;
//     update(a);
//     cout<<a<<endl;  
//     return 0;
// }

