#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0 ; i <n; i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    // loop to traverse the array and count all elements less than pivot
    for (int i = s+1; i <=e; i++){
        if (arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right partitioned part ko smbhal lete h
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex){
        
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
        
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    // base case
    if(s >= e){
        return;
    }
    // partition the array around a pivot element x
    int p = partition(arr, s, e);

    // recursive algo to sort the left part 
    quickSort(arr, s, p-1);
    // recursive algo to sort the left part 
    quickSort(arr, p+1, e);
}

int main(){
    int arr[8] = {7,12,3,0,1,9,6,5};
    int n = 8;
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}