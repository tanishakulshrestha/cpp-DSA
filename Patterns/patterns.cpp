#include <iostream>
using namespace std;
void print(int n)

{
    for (int i=0 ; i <n ; i++){
        for (int j=0 ; j <n ; j++)
         cout<<"*";
           cout<<endl; }

        }

int main() {
int n;
cout<<"enter number:";
cin>> n;
print (n);

return 0;
}