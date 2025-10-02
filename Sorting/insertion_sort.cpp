#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 0; i<= n-1 ; i++){
        int j= i;
    while (j>0 && arr[j-1]> arr[j])
    {
        swap (arr[j-1] , arr[j]);
            j-- ;
    }
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

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
