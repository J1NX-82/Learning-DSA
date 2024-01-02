#include<iostream>
#include <climits>
using namespace std;
//! LINEAR SEARCH
bool isPresent(int arr[][3], int target, int row, int col){

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j] == target){
                return 1;
            };
        }        
    }
    return 0;
}

//! To Print Largest Row Sum
int largestRowSum(int arr[][3], int row, int col){
    
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum+= arr[i][j];
        }        
        
        if (sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is" << maxi << endl;
    return rowIndex;
}



int main(){
    // create 2D array
    int arr[3][3];
    // initializing array
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};

    cout << " ENTER the elements of array" << endl;

    //??taking input --> row wise
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }        
    }

    // //??taking input --> col wise
    // for(int i = 0; i < 4; i++){
    //     for (int j = 0; j < 3; j++){
    //         cin >> arr[j][i];
    //     }        
    // }
    
    //displaying input
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] <<" ";
        }        
        cout << endl;
    }
    
    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout << "Element Found!!!" <<endl;
    }
    else{
        cout << "NOT FOUND" <<endl;
    }

    cout << "Max row index is at " << largestRowSum(arr, 3, 3) << endl;

    return 0;
}
