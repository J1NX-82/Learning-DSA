//first, last and total number of occurence
#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0, end  = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end){
        // check the right side for right most occurence
        if (arr [mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr [mid]){

            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){
    
    int arr[13] = {0, 2, 2, 3, 3, 3, 5, 6, 6, 7, 8, 8 ,8};

    int total ={lastOcc(arr, 13, 3) - firstOcc(arr, 13, 3)};
    cout << "The first occurence of the key is at index:" << firstOcc(arr, 13, 3) << endl;
    cout << "The last occurence of the key is at index:" << lastOcc(arr, 13, 3) << endl;
    cout << "The total number of occurence of the key is :" << total<< endl;

    return 0;
}