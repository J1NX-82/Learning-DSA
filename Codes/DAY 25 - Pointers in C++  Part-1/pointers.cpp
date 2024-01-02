//Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc. 
#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout << num << endl;

    //address of operator 

    cout << "address of num :" << &num << endl;

    //pointer stores address

    int *ptr = &num;
    cout << "value of num b4 incrementing" << num << endl;
    (*ptr)++;
    cout << "value of num after incrementing" << num << endl;


    cout << "address of pointer is : " << ptr << endl;
    cout << "value of pointer is : " << *ptr << endl;
    cout << "Size of pointer is : " << sizeof(int) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;

    //copying a pointer

    int *ptr2 = ptr;
    cout << ptr << "----" << ptr2 << endl;
    cout << *ptr << "----" << *ptr2 << endl;

    //important concept
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t;
    cout << "before t" << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;

    return 0;
}