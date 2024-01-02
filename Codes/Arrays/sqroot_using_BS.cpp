#include<iostream>
using namespace std;

//function to use BinarySearch
int BinarySearch(int n){
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    int ans = -1;

    while(s < e){
        int square = mid * mid ;

        if(square == n){
            return mid;
        }
        else if (square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        int mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int n = 36;
    return BinarySearch(n);

    return 0;
}