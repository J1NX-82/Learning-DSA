#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "boka";

    cout << "Address : " << arr << endl;

    cout << "Prints the output : "<< ch << endl;
//!cout function for character array and integer array is different


    char *c = &ch[0];
//! Incase of char array it prints the entire string instead of address of first element
    cout << c << endl;

    char temp = 'z';
    char *ptr = &temp;
    cout << ptr << endl;

        
    return 0;

}