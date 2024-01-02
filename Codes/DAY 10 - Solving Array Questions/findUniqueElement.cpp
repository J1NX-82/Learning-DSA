#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size){
    int ans = 0;

    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[11] = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    int finalAns = uniqueElement(arr, 11);
    cout << "Unique Element in the array is : " << finalAns;
    return 0;
}