#include<iostream>

using namespace std;
int main(){
    
    int num;
    cout<<"Enter the value of n"<<endl;
    cin>>num;
    cout<<endl;

    switch(num){
       
       case 1 : cout<<"The number you've entered corresponds to Monday"<<endl;
                break;
       case 2 : cout<<"The number you've entered corresponds to Tuesday"<<endl;
                break;
       case 3 : cout<<"The number you've entered corresponds to Wednesday"<<endl;
                break;
       case 4 : cout<<"The number you've entered corresponds to Thursday"<<endl;
                break;
       case 5 : cout<<"The number you've entered corresponds to Friday"<<endl;
                break;
       case 6 : cout<<"The number you've entered corresponds to Saturday"<<endl;
                break;
       case 7 : cout<<"The number you've entered corresponds to Sunday"<<endl;
                break;

       default: cout<<"The number you've entered doesn't corresponds to any week days"<<endl;

    }

    return 0;
}