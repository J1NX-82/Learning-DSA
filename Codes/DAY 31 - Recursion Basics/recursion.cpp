// RECURSION
// Two things reqd. --> a) Recursive Relation and b) Base Case

// A base case / base condition : that case after which processing stops : mandatory to write return something;
// No base case will lead to multiple function calls leading to stack overflow of function stack and will result in segmentation fault


#include<iostream>
using namespace std;

int factorial(int n){

    // Base condition
    if (n == 0){
        return 1;
    }

    return n * factorial(n-1);
    /*
    int small_problem = factorial(n - 1);
    int big_problem = n * small_problem;

    return big_problem;
    */
}


int main(){
    
    int n;
    cout << "Enter the no. you wish to find factorial for : " << endl;
    cin >> n;
     
    int ans = factorial(n);

    cout << "Factorial of the number is : " << ans;

    return 0;
}