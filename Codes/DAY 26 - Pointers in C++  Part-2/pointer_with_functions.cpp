#include<iostream>
using namespace std;

void print(int *p){
    cout << "Address : " << p << endl;
    cout << "Value : " << *p << endl;
    cout << "Address : " << &p << endl << endl;
}

void update(int *p){
//ADDRESS doesn't get updated in main function
    // p = p + 1;
    // cout << "Inside : " << p << endl;

//However, value gets updated if changed from created function to main function
//--->Because it updates the value in the main function 
    *p = *p + 1;
    

}

int getSum(int arr[], int n){

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i]; //sum+= i[arr]; <----SAME THING
    }
    return sum;
}

int main(){
    
    int value = 5; 
    int *p = &value;

    print(p);
//Value remains same even after updating the pointer by passing it via function : 
//---> This is because in the value of p changes inside the created function and not in main function 
    // cout << "Before update : " << p << endl;
    // cout << "After update : " << p << endl << endl;

    cout << "INITIAL VALUE : " << *p << endl;
    update(p);
    cout << "UPDATED VALUE : " << *p << endl << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum is : " << getSum(arr, 5) << endl;
//NOTE : when passing arr in function, instead of the complete array, a pointer array is passed thus giving the size of array as 4 and not 20;
//BENEFIT : a part of array is sent 
    cout << "Sum is : " << getSum(arr+3, 2) << endl;

    return 0;
}