#include<iostream>
using namespace std;

//function to find Pivot in Array
int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = (s+e) / 2;

    while (s < e){
        if(arr[mid >= arr[0]]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}


//2nd function to use Binary Search
int BinarySearch(int arr[], int size, int key){
    int start = 0; 
    int end = size - 1;

    // int mid = (start + end) / 2 ;
// if the value of start and end gets equal to the maximum value of int = ( 2^31 - 1 ), upon adding them we'll get a value that won't lie on integer value, to overcome this problem we can rather use this formula
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        
        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }
        int mid = start + (end - start)/2;
        // mid = (start + end) / 2 ;       
    }
        return -1;
}


int main(){
    int arr[9] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int pivot = getPivot(arr, 9);
    int k;

    if(k >= arr[pivot] && k <= arr[8]){
        return BinarySearch(arr, 9, 6);
    }      
    else{
        return BinarySearch(arr, pivot - 1, k);
    }
    return 0;
}