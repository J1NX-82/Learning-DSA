    #include<iostream>
using namespace std;

//function declaration for INSERTION SORT 
int insertionSort(int arr[], int n){
    for(int i = 1; i < n - 1; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[5] = {4, 12 ,11 ,20};
    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}