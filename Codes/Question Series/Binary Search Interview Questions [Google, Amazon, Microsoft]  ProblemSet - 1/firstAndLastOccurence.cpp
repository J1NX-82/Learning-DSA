#include<iostream>
using namespace std;

int firstOccurrence(int* arr, int n, int key){

    int s = 0;
    int e = n - 1;
    int ans = -1;
    
    while(s <= e){
        int mid = s + (e - s)/2;
        
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int* arr, int n, int key){

    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s)/2;

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[6] = {0, 0, 1, 1, 2, 3};

    int ans = firstOccurrence(arr, 6, 1);
    int ans2 = lastOccurrence(arr, 6, 1);

    cout << "First occurrence of the element is in index : " << ans << endl;
    cout << "Last occurrence of the element is in index : " << ans2 << endl;
    return 0;
}
