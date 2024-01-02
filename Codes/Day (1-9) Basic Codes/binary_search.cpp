#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
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
    }
        return start;
}
int main(){ 
    int odd[5] = {1, 4, 5, 7, 9};

    int even[6] = {1, 4, 5, 7, 9, 23};

    int oddIndex = binarySearch(odd, 5, 7);
    cout << "Index of is 7 is " << oddIndex << endl;

    int evenIndex = binarySearch(even, 6, 23);
    cout << "Index of is 5 is " << evenIndex << endl;

    return 0;
}
