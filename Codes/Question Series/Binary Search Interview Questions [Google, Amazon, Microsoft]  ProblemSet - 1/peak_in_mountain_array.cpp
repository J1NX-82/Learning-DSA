//program to calculate peak element in mountain array

#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start = 0, ans = 0, end = size - 1; 
    int mid = (start + end ) / 2;
    int ans1;
    if (size % 2 != 0 )
    {
        ans = size - 1;
    }
    
    else if( size % 2 == 0){
        ans = size - 1;
        ans1 = ans + 1;
    }
    else if (ans > ans1){
           return ans1;
    }
    return ans;
}
int main(){
    int arr[6] = {3, 4, 5, 1, 0, 0};
    cout << "The peak element in the mountain array is:" << peakElement(arr, 6) << endl;
    return 0;
}