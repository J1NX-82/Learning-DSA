//TIME COMPLEXITY === O(n^2)
//----->>>>BEST TIME COMPLEXITY === O(n)
//SPACE COMPLEXITY === O(1) ===since already variables are created space complexity is const.
// in every round of bubble sort nth largest element gets moved towards the endṇṇ

#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for(int i = 0; i < n -1; i++){
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    if(swapped == false){
        //already sorted....
        break;
    }
    }
}

int main(){
    int arr[5] = {10, 1, 7, 6, 14};

    cout << "Sorting in progress..." << endl << endl;

    bubbleSort(arr, 5);

     for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}