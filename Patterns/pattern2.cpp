#include <iostream>
using namespace std;
void print(int n)
{
for (int i=1; i<=n; i++){
    for (int j=1; j<=i;j++){
        cout<< i << " ";
    }
    cout << endl;
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
//   if in line 7  (cout<< i << " ";) i is replaced with j  
//    (cout<< j << " ";) then output will be 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5  as j= coloumns and i= rows