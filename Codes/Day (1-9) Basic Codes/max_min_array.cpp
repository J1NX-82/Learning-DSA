#include<iostream>
using namespace std;

//declaring a function to find max value present in array
int getMax(int num[], int n){

    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < max)
        {
            max = num[i];
        }
    }
    return max;   
}
//declaring a second function to find min value present in array
int getMin(int num[], int n){

    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > min)
        {
            min = num[i];
        }
    }   
    return min;
}

//Main function carrying out the execution
int main(){

    int size;
    cout<<"Enter the size of array you wish to find MIN and MAX values for:"<<endl;
    cin >> size;

    int num[100];

    //taking input from user and storing it to the array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];

    }

    cout<<"The Maximum value is : " << getMax(num, size) <<endl;    
    cout<<"The Minimum value is : " << getMin(num, size) <<endl;    

    return 0;
}