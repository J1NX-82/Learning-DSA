#include<iostream>
using namespace std;

int main(){
    string str = {'a', 'b', '\0', 'c', 'd', '\0'};
    cout << str;
    cout << endl;

    char a[20] = {'a', 'b', '\0', 'c', 'd', '\0'};
    cout << a;
    cout << endl;
    return 0;
}