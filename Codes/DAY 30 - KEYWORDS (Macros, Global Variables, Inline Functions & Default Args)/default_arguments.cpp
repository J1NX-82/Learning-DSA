//Default arguments takes up a default case scenario if nothing is mentioned
//else will take up the value given by the user


#include<iostream>
using namespace std;

void print(int arr[], int size, int start = 0){

    for (int i = start; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    

}

//here defining start = 0 is an example of default arg

int main(){
    
    int size = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    print(arr, size);
    cout << endl;
    print(arr, size, 1);

    return 0;
}