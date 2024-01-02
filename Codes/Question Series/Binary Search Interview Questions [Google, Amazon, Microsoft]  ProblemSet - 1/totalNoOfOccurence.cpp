#include<iostream>
using namespace std;

int totalOccurence(int* arr, int n, int k){
    int count = 0;
    for (int i=0 ;i <n; i++){
        if(arr[i] == k){
            count++;
        }
}
        return count;
}
int main(){
    int arr[6] = {0, 1, 1, 1, 2, 3};

    int ans = totalOccurence(arr, 6, 1);
    cout << "Total no. of occurence is : " << ans << endl;
    return 0;
}