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
    return row;
}