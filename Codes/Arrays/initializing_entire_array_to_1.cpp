#include<iostream>
using namespace std;

int main(){
    int arr[10];
    fill_n(arr, 10, 2 );

    //printing the value of array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}