#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0' ; i++){
    count++;
    }
    return count;
}

int main(){
    char name[20];

    cout << "Enter a string : " <<endl;
    cin >> name;

    cout << "The string you've entered is : " << name << endl; 
    cout << "Length of the string is : " << getLength(name) << endl;
    return 0;
}