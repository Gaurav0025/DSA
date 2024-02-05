#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// using recursion
int factorial(int n){
    if(n == 0 || n ==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n = 5;
    cout<<"factorial of " << n << " " "is" " " << factorial(n) << endl;
    return 0;
}