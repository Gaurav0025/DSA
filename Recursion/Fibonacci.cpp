#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n ){
    // That's very simple/Naive approch But u should think and find out better approch 
    //  which is easy to understand and takes less time.
    // int a = 0,b=1,c;
    // if(n==0) return a;
    // for(int i = 2;i<=n;i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    // return c;

    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n = 9;
    cout<<fib(n);
    return 0;
}