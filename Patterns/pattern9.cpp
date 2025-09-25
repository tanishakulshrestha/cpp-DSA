#include <iostream>
using namespace std;
void print(int n){

    for (int i= 0; i<= n; i++){
// if i=2 then the loop goes from A to C 
    char ch = 'A' + i; 
    for (int j=0; j<=i; j++)
        cout<< ch<<" ";
      cout<< endl;
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
// in case of inverse triangle ch<= 'A' + (n-i-1) will be there