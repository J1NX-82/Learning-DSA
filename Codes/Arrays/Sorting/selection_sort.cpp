//SPACE COMPLEXITY ==== O(N)

//TIME COMPLEXITY ==== O(N^2) for both best and worst case scenario
           /* Swapping algo
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
           int temp = arr[i];*/ 
           
#include<iostream>
using namespace std;

//function with arguments but no return type 
int selectionSort(int arr[], int n){
    for(int i = 0; i < (n-1); i++){
        int minIndex = i;
            for (int j = i + 1; j < n; j++){
                if (arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n, arr[10];
    cout << "Enter the size of Array" << endl;
    cin >> n;

//taking input for elements in the ARRAY
    cout << "Enter the elements to be stored in the array" << endl;
    for (int i = 0; i < n;  i++){
        cin >> arr[i];
    }

    cout << "Sorting in progress..." << endl;

    selectionSort(arr, n);

//PRINTING SORTED ARRAY IN ASCENDING ORDER ...
    cout << "Printing sorted array in ascending order..." << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
//PRINTING SORTED ARRAY IN DESCENDING ORDER...
    cout << "Printing sorted array in descending order..." << endl;
    for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
   }

    return 0;
}

/*swapping algo

    int temp; 
    temp = x;
    x = y;
    y = temp;
*/