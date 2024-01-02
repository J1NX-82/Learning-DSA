#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i, int j){
    // Base case
    if(i > j){
        return true;
    }
    // progression
    if(str[i]!= str[j]){
        return false;
    }
    // recursive call
    else{
        checkPalindrome(str, i+1, j-1);
    }
}

int main(){
    string name = "abbca";
    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout << "The given string is a palindrome" << endl;
    }

    else{
        cout << "The given string is NOT a palindrome" << endl;
    }
    return 0;
}