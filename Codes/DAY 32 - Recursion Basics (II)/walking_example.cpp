#include<iostream>
using namespace std;

void getHome(int src, int dest){
    
    cout << "Source : " << src << "Destination : " << dest << endl; 
    
    // BASE CASE
    if(src == dest){
        cout << "Ghar Pohoch Gaya" << endl;
        return;
    }

    // progression for next step
    src++;

    // recursive call
    getHome(src,dest);
}

int main(){
    
    int src = 1;
    int dest = 10;

    getHome(src, dest);
    return 0;
}