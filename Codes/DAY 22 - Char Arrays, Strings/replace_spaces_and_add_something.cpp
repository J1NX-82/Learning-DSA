#include<iostream>
#include<string>
using namespace std;

string replace(string str){
    string temp = "";

    for (int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('S');
            temp.push_back('W');
            temp.push_back('E');
            temp.push_back('A');
            temp.push_back('T');
            temp.push_back('A');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
    
}

int main(){
    string str;
    cout<<"Enter a sentence: ";
    getline(cin,str);
    cout << "The completed sentence is : " << replace(str);

    return 0;
}