#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    vector<int> arr3 = {0, 9, 10};
    vector<int> arr4 = {11, 12};

    vector<int> merged;

    // Merge each pair of arrays into the merged vector
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), back_inserter(merged));
    merge(arr3.begin(), arr3.end(), arr4.begin(), arr4.end(), back_inserter(merged));

    // Sort the merged array using std::sort
    sort(merged.begin(), merged.end());

    // Print the merged sorted array
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}
