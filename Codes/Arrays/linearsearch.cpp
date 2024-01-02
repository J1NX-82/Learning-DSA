//Program to perform linear search in an array

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
//if key is not found return false 
    return 0;
}

int main(){
    
    int arr[10]= {5, -7, -2, 10, 22, -2 , 0, 5, 22, 1};
    
    int key;

    cout<<"Enter the key you wish to search for" << endl;
    cin >> key ;
    
    //whether 1 is present in this array or not
    
    bool found = search(arr, 10, key);

    if(found){
        cout << "Key is present" << endl;
    } 
    else{
        cout << "Key is NOT present" << endl;
    }
    return 0;
}