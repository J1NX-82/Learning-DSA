// you-have-been-given-a-number-of-stairs
// initially-you-are-at-the-0th-stair-and-you-need-to-reach-the-nth-stair
// reach-time-you-can-either-climb-one-step-or-two-steps-
// you-are-supposed-to-return-the-number-of-distinct-ways-in-which-you-can-climb-from-the-0th-step-to-nth-step
#include<iostream>
using namespace std;

int countDistinct(int stairs){
    // Base case
    if (stairs < 0){
        return 0;
    }
    else if (stairs == 0){
        return 1;
    }

    // Recurcive relation
    int ans = countDistinct(stairs-1) + countDistinct(stairs-2);

    return ans;
}

int main(){
    int stairs;
    cout << "Enter no. of stairs : " << endl;
    cin >> stairs;

    cout << "Number of distinct ways to climb a staircase is: "<<countDistinct(stairs);
    
    return 0;
}