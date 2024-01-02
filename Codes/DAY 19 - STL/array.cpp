#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main(){
    //?Default array initialization
    int arr[3]={1,3,2};

    //?STL array initialization == STATIC in nature
    
    //!operations that can be performed in STL array
    array<int, 3> a = {1, 3, 2};
    int size = a.size();

    //! (1) "at" function
    cout << "Element at 2nd Index is : " << a.at(2) <<endl;
    //! (2) "empty" funtion
    cout << "Empty or not-->" << a.empty() <<endl;
    //! (3) "first" element
    cout << "First element is : " << a.front() << endl;
    //! (4) "last" element
    cout << "Last element is : " << a.back() << endl;

    return 0;
}