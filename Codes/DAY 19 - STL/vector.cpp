#include<iostream>
#include<vector>
using namespace std;

int main(){
// todo----->>>>VECTOR IS A DYNAMIC ARRAY
        // vector<string> v={"apple", "banana","orange"};
        vector<int> v;
        //to copy one vector to another
        vector<int> last(v);
        //to initialize a vector array        
        // vector<int> a(size, value_to_be_set)
    //!operations that can be performed in STL vector

    //! (1) "capacity" function
    cout << "Capacity -->" << v.capacity() <<endl;
    //! (2) "push_back" function
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Size -->" << v.capacity() <<endl;
    //! (3) "first" element
    cout << "First element is : " << v.front() << endl;
    //! (4) "last" element
    cout << "Last element is : " << v.back() << endl;
    //! (5) "pop_back" 
    cout << "Before pop" << endl;
    for (int i : v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v){
        cout << i << " ";
    }
    cout << endl;
    //! (5) "clear" function
    cout << "Before clear size : " << v.size() << endl;
    v.clear();
    cout << "After clear size : " << v.size() << endl;

    cout << endl;
}
