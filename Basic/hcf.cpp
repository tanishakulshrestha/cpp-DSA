#include <iostream>
using namespace std;
int main() {
int n1 ; int n2;
int min;
 cout << "Enter numbers: ";
cin >> n1 >>n2;
cout<< endl;
if (n1 > n2){
    min = n2;
}
else{min= n1;}
for (int i =1; i<= min; i++){
    if(n1 % i == 0 && n2 % i ==0){
        cout<< i ;
        cout<<endl;
    }
}
return 0;
}

