#include<iostream>
using namespace std;

//Function to check length of string
int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


char getMaxOccuringChar(string s){
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = 0;
        // lowercase
        if(ch >= 'a' && ch <='z'){
            number = ch - 'a';
        }
        // uppercase
        if(ch >= 'A' && ch <='Z'){
            number = ch - 'A';
        }
        arr[number]++;
   }

    // find max occuring character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++){
        if (maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }       
    }

    char finalAns = 'a' + ans;
    return finalAns;
}


int main(){
    string s;
    cout << "Enter a string : " << endl;
    cin >> s;

    cout << "Max occuring character is : " << getMaxOccuringChar(s) <<endl;


    return 0;
}