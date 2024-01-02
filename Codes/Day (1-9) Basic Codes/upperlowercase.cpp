#include<iostream>

using namespace std;
int main(){
    char a;
    cout<<"Enter a character"<<endl;
    cin>>a;
    if(a>= 'A' && a<= 'Z'){
        cout<<"This is Uppercase"<<endl;
    }
    else if(a>= 'a' && a<= 'z'){
        cout<<"This is Lowercase"<<endl;
    }
    else{
        cout<<"This is a Digit"<<endl;
    }
    return 0;
}