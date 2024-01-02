//STACK memory = Dynamic Allocation
//HEAP memory = Dynamic Allocation

// ? Pointer takes 8 bytes in 64 bit system and 4 bytes in 32 bit system
// ? I guess NOT ALWAYS TRUE
#include<iostream>
using namespace std;

int main(){
    // ! BAD PRACTICE 
    /*

    int n;
    cin >> n;
    int arr[n];

    */

   char ch ='q';
   cout << sizeof(ch) << endl;

   char*c = &ch;
   cout << sizeof(c) << endl;

//  Dynamic Memory Allocation

    int* arr = new int[5];
    return 0;
}