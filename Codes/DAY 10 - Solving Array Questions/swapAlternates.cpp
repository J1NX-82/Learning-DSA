#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n){
    for (int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[5] = {1, 2, 3, 4, 5};
    int odd[6] = {1, 2, 3, 4, 5, 6};
    cout << "For even condition:" << endl;
    printArray(even, 5);
    swapAlternate(even, 5);
    printArray(even, 5);
    cout << endl;
    cout << "For odd condition:" << endl;
    printArray(odd, 6);
    swapAlternate(odd, 6);
    printArray(odd, 6);

    return 0;
}