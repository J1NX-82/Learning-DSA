#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    //ek vector banaya n size ka , bool data type uska naam dia visited aur shuru mei sb false se initialized kr dia
    vector<bool> visited(n, false);

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // agar ek baar woh element array ka mil gya phirse toh skip krke aaage badh jao
        if (visited[i] == true)
            continue;

        // count ko 1 se isliye initialize kiya kyunki 1 baar toh hoga hi array mei
        int count = 1; 
        // aur ek loop jo array ke 2nd element se chalega upto n
        for (int j = i + 1; j < n; j++) {
            // agar dono element same mil gye...toh count ko badha do aur mark kr dena ki ye element visit kr liye
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        // ye part call pe btana hoga comments se mushkil hoga smjhana
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "highest frequency element: " << maxEle << endl;
    cout << "lowest frequency element: " << minEle << endl;
}

int main(){
    int arr[] = {4, 2, 4, 3, 1, 4, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}