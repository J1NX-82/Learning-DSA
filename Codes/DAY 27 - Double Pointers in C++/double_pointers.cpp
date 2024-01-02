#include<iostream>
using namespace std;

int main(){
    
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "Address of int data type : " << &i << endl;
    cout << "Pointer pointing to address : " << ptr << endl;
    cout << "value of pointer : " << *ptr << endl;
    cout << "Adress of pointer : " << &ptr << endl << endl;


    cout << "Pointer pointing to address Ptr : " << ptr2 << endl;
    cout << "value of double pointer : " << *ptr2 << endl;
    cout << "value of original data_type : " << **ptr2 << endl;
    cout << "Adress of double pointer : " << &ptr2 << endl;
    return 0;
}