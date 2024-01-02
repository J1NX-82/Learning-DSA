// You are given a 0 indexed integer array Alpha. You have to partition the array into one or more contiguous subarrays.
// The partition of the array is valid if each of the obtained subarrays satisfies one of the following conditions:
// a)The Subarray consists of exactly 2 equal elements. For example the subarray [2,2] is good
// b)The subarray consists of exactly 3 equal elements. For example the subarray [4,4,4] is good.
// c)The subarray consists of exactly 3 consecutive increasing elements, that is the difference between adjacent elements is 1
#include <iostream>

using namespace std;

bool is_valid_subarray(int arr[], int i, int n) {
  // Check if the subarray is of type 2.
  if (i + 1 < n && arr[i] == arr[i + 1]) {
    return true;
  }

  // Check if the subarray is of type 3.
  if (i + 2 < n && arr[i] == arr[i + 1] && arr[i] == arr[i + 2]) {
    return true;
  }

  // Check if the subarray is of type c.
  if (i + 2 < n && arr[i] + 1 == arr[i + 1] && arr[i + 1] + 1 == arr[i + 2]) {
    return true;
  }

  return false;
}

int partition(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (is_valid_subarray(arr, i, n)) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {2, 2, 2, 3, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  int count = partition(arr, n);
  cout << endl;
  cout << "The number of valid subarrays is: " << count << endl;
  cout << endl;

  return 0;
}