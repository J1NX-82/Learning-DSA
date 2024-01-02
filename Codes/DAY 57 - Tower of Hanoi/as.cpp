#include <iostream>

using namespace std;

int PlayTheGame(int arr[], int n) {
  int steps = 0;

  while (true) {
    int oddBuckets = 0;
    int totalFruits = 0;
    for (int i = 0; i < n; i++) {
      totalFruits += arr[i];
      if (arr[i] % 2 == 1) {
        oddBuckets++;
      }
    }

    if (totalFruits % n == 0 && oddBuckets <= 1) {
      return steps;
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 == 1) {
        arr[i]++;
        steps++;
      }
    }

    for (int i = 0; i < n; i++) {
      arr[i] /= 2;
      steps++;
    }
  }
}

int main() {
  int n;
  cout << "Enter the number of buckets: ";
  cin >> n;

  int arr[n];

  cout << "Enter the target values for each bucket:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int result = PlayTheGame(arr, n);

  cout << "Minimum steps required: " << result << endl;

  return 0;
}