#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double e(int x,int n){
    static double p = 1,f=1;
    double r;
    if(n==0) return 1;  // Termination Condition
    r = e(x,n-1); // Recursive Call
    p = p * x; // Update the power of x
    f = f*n;  // Factorial
    return (r+p/f);
}
int main(){
    int x = 4,n=15;
    cout<<e(x,n);
    return 0;
}
