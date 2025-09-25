#include <iostream>
using namespace std;
void print(int n) {
    int space = 2 * n - 1;
    for (int i = 1; i <= n; i++) {
        // Left side numbers (increasing)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Middle spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // Right side numbers (decreasing)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}



int main() {
int t;
 cout << "Enter number of test cases: ";
cin >> t;
for (int i=0; i<t; i++){
int n;
cout<<"enter number:";
cin>> n;
print (n);
}
return 0;
} 