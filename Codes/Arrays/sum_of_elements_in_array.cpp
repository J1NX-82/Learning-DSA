#include<iostream>
using namespace std;

//declaring a function to take sum of all elements in array...
   int getSum(int arr[], int size){
   int sum = 0; 
   for (int i = 0; i < size ; i++)
   {
        sum = sum + arr[i];
   }
   return sum;  
}


int main(){
//asking the user size of array he wish to take
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr [100];


//using for loop to take I/P from the user...
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

//printing the answer 

    cout << " The sum of all elements in an array is : " << getSum(arr, size) << endl;

    return 0;
}