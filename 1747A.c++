#include <iostream>

using namespace std;

int maxDifference(int arr[], int n) {
  int S = 0; // Total sum
  int P = 0; // Sum of positive elements

  for (int i = 0; i < n; ++i) {
    S += arr[i];
    if (arr[i] > 0) {
      P += arr[i];
    }
  }

  return 2 * P - S;
}

int main() {
  int t; // Number of test cases

  cin >> t;

  for (int i = 0; i < t; ++i) {
    int n; // Length of the array

    cin >> n;

    int arr[n]; // Array to store elements

    for (int j = 0; j < n; ++j) {
      cin >> arr[j];
    }

    int max_diff = maxDifference(arr, n);
    cout << max_diff << endl;
  }

  return 0;
}
