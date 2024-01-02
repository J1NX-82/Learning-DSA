#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int [len1];
    int *second = new int [len2];

    // copy valus 
    int mainArrayIndex = s;
    for(int i = 0 ; i < len1 ; i++){
        first[i] = arr[mainArrayIndex++];
    }   
    // copying values for other half of array
    mainArrayIndex = mid + 1;
    for(int i = 0 ; i < len2 ; i++){
        second[i] = arr[mainArrayIndex++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2 ){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

}

void mergeSort(int arr[], int s, int e){
    // base case
    if(s >= e){
        return; 
    }

    //calculating mid
    // (s+e)/2 can overflow when both s and e have maximum possible value of integer i.e. 2^31-1.
    // This will result in wrong answer.
    // So to optimise this, we write-
    // int mid= start + (end  -  start)/2 to handle such edge cases.
    
    int mid = s + (e - s) / 2;

    // sorting left part
    mergeSort(arr, s, mid);

    // sorting right part
    mergeSort(arr,mid+1 ,e);

    // merging the two sorted arrays
    merge(arr, s, e);
}

int main(){
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n-1);

    //printing array :  
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;
}