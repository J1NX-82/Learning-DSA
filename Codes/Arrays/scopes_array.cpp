//Why value of arr[0] gets updated in main function when element was changed on function block?

//REASON : Address of first memory block is given to the function...The copy of all 3 elements int this case is not given to function .....Thus....

#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<<endl;

    //updating first element to 120
    arr[0] = {120};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";  
    }
    cout << endl; 

    cout<<"Going back to main function"<<endl;
}

int main(){
    
    int arr[30] = {1,2,3};

    update(arr, 3);

   for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";  
    }
    cout << endl;
    


    return 0;
}