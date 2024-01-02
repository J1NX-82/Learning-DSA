#include<iostream>
using namespace std;

int printArray(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}

void sortArray(int *arr, int n){
    // base case
    if( n == 0 || n == 1){
        return;
    }

    // solving 1 case
    for (int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
        
    }
    
    // recursive call
    sortArray(arr, n-1);
}


int main(){
    int arr[10] = {3,2,43,3,9,82,10,58,97,43};

    sortArray(arr, 10);

    printArray(arr, 10);

    return 0;
}