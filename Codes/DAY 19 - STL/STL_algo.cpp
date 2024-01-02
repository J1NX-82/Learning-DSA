#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //Using binary search algo 
    cout << "Binary search : " << binary_search(v.begin(), v.end(), 3) << endl;

    //finding lower bound 
    cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 6) -v.begin() <<endl;

    //finding upper bound
    cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 4) -v.begin() << endl;

    int a = 5;
    int b = 10;
    //printing max of two numbers
    cout << "MAX : " << max(a,b) << endl;
    //printing min of two numbers
    cout << "MIN : " << min(a,b) << endl;
    
    //swapping 
    cout << " B4 swap " << a << "&" << b << endl;
    swap(a,b);
    cout << " After swap " << a << "&" << b << endl;

    //reversing string
    string str = "Sweata";
    cout << " String is : " << str << endl;
    reverse(str.begin() , str.end());
    cout << "Reversed String is : " << str;

    //rotating a vector
    rotate(v.begin(), v.begin()+1, v.end());
    cout << "Rotated vector is : " << endl;
    for (int i : v){
     cout << i << " ";
    }
    cout << endl;
    
    //sorting array (based on INTROSORT = QuickSort, HeapSort and InsertionSort)
    cout << "Sorting array in progress..." << endl;
    sort(v.begin(), v.end());
    //Printing sorted Array using loop
    for (int i : v){
     cout << i << " ";
    }
    return 0;
}