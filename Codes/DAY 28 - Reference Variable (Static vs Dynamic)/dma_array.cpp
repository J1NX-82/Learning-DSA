// IN Static memory allocation, memory gets freed automatically.
// In Dynamic memory allocation, memory needs to be freed manually.
#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    return sum;
}

int main(){
    
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    // DMA
    int *arr = new int[n];

    //taking input in array
    cout << "Enter elements in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = getSum(arr, n);
    cout << "Sum of Array is :" << ans << endl;

    delete []arr;
    return 0;
}