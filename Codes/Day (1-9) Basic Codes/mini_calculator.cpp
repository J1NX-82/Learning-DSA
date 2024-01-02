#include<iostream>

using namespace std;
int main(){
    
    int a,b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you'd like to perform on a and b"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<(a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    case '%':
        cout<<(a%b)<<endl;
        break;
    
    default:
        cout<<"The operation you've entered isn't supported yet"<<endl;
        break;
    }


    return 0;
}