#include<iostream>
using namespace std;

#define Row 4
#define Col 4

void prinSpiralOrder(int arr[Row][Col], int m, int n){
    int rowStart = 0, rowEnd = m - 1;
    int colStart = 0, colEnd = n - 1;

    while(rowStart <= rowEnd && colStart <=colEnd){
        
    }
}


int main(){
    int arr[Row][Col] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    printSpiralOrder(arr, Row, Col);
    return 0;
}