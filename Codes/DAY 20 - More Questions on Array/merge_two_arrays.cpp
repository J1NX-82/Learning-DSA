#include<iostream>
using namespace std;

void merge(int* arr1, int n, int* arr2, int m, int* arr3){
    int i= 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;+
        }
        k++;
    }

    // if elements of first array is more than in array 2
    while (i < n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    // if elements of second array is more than in array 1
    while (j < m){
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    
}

void print(int ans[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    
}

int main(){
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[6] = {};
    int arr4[] = {};

    int arr3[8] = {0};
// function call to merge 2 arrays
    merge(arr1, 5, arr2, 3, arr3);
// function call to print array
    print(arr3, 8);
    return 0;
}