/*
            1
        1   2   1
    1   2   3   2   1
1   2   3   4   3   2   1

*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int row = 1;

    while (row<=n)
    //first print space
    {   int space = n - row;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
    //secondly print first triangle
            int col = 1;
            while (col<=row)
            {
                cout<<col;
                col+=1;
            }
    //finally print second triangle
                int start = row-1;
                while (start)
                {
                    cout<<start;
                    start = start - 1;
                }        
        cout<<endl;
        row+=1;
    }
    return 0;
}