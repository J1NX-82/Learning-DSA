#include<iostream>
using namespace std;

int main(){
    
//!! 1st case scenario
    int arr[10] = {23, 122, 41, 67};
    cout << "address of first memory block is : " << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block is : " << &arr[0] << endl;

    cout << "4th : " << *arr << endl;
    cout << "5th : " << *arr + 1 << endl;
    cout << "6th : " << *(arr+1) << endl;
    cout << "7th : " << *(arr) + 1 << endl;
    cout << "8th : " << arr[2] << endl;
    cout << "9th : " << *(arr+2) << endl;

    // arr[i] = *(arr + i)
    //         OR
    // i[arr] = *(i + arr)

    int i = 3; 
    cout << i[arr] << endl;
//!! 2nd case scenario

    int temp[10];
    cout << "Size of temp : " << sizeof(temp) << endl;
    cout << "2nd : " << sizeof(*temp) << endl;
    cout << "3rd : " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
//!! 3rd case scenario

    int a[20] = {1, 2, 3, 4};
    cout << "Address " << &a[0] << endl;
    cout << "Address " << &a << endl;
    cout << "Address " << a << endl;

    int *b = &a[0];
    cout << b << endl;
    cout << *b << endl;
    cout <<  &b << endl;

//!! 4th case scenario

    int brr[20];
//ERROR
    //brr = brr + 1;

//WORKING CASE  
    int *abc = &brr[0];
    cout << abc << endl;
    abc = abc + 1;
    cout << abc << endl;


        return 0;
}