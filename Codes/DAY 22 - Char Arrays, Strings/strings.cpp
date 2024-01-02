//In case of character array if there are memory left, a null character would be filled which will act as a terminator

#include<iostream>
using namespace std;

int main(){
    char name[20];

    cout << "Enter name : " << endl;
    cin >> name;

    cout << "The name you've entered is : " << name << endl;

//cin has some limitations; it stops the execution of the program when it encounters space" ", tab"\t" or enter

    return 0;
}