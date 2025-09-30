#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i<=n-2; i++) {
         int mini = i;
        for (int j = i; j <= n-1 ; j++) {
            if (arr[j] < arr[mini]) 
           mini = j;
        }
        swap(arr[mini], arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // works in g++ (else use vector<int> arr(n);)
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
