#include<iostream>
using namespace std;
//Function to conver any upperCase character to lowerCase character
int toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
//Function to check length of string
int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
//FUNCTION TO CHECK FOR PALINDROME
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while (s <= e){
        if(toLowercase( a[s] )!= toLowercase( a[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;    
}


int main(){
    char name[30];
    cout << "Enter a string : " << endl;
    cin >> name;

    int len = getLength(name);
    cout << "Length of string is : " << getLength(name) << endl;
    cout << "Palindrome or not?" << checkPalindrome(name, len);

    return 0;
}