#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    int start = 0 ;
    int end = n-1 ;

    for (int i = 0; start <= end ; start++ , end--)
    {
        swap(arr[start],arr[end]);
    }
    
}

int main(){
    
    int arr[5] = {2, 7, 5 ,9, 10};
    int brr[4] = {1, 9, 3, 5}; 

    reverseArray(arr, 5);
    reverseArray(brr, 4);

    printArray(arr, 5);
    printArray(brr, 4);


    return 0;
}