/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int balancedBTs(int h);
int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
#include<math.h>
int balancedBTs(int h) {
 if(h<=1){
     return 1;
 }
    int mod=(int) pow(10,9)+7;
    int temp1=balancedBTs(h-1);
    int temp2=balancedBTs(h-2);
    int a=(((long)temp1*temp1)%mod);
    int b=(((long)2*temp1*temp2)%mod);
    return (a+b)%mod;
}
