//swap alternates elements in array

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}


void swapAlternate(int arr[], int size){
    for (int i = 0; i < size ; i+=2)        
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }   
}

int main(){
    int even[6] = {1, 4, 6, -19, 20, 85}; 
    int odd [5] = {75, 5, 67, 4, 3}; 

    swapAlternate(even, 6); 
    printArray(even, 6);
    
    cout << endl; 

    swapAlternate(odd, 5); 
    printArray(odd, 5);

    return 0;

}