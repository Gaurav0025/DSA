#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float power(int x,int n){
    // This is very basic approch but in recursion we should think and find out the 
    // easiest way to solve this problem which is easy to understand and takes very less time .

    // long long pow = 1;
    // for(int i = 0;i<n;i++){
    //     pow = pow*x;
    // }
    // return pow;

    // if(x == 0) return 0;
    // if(n == 0) return 1;
    // return x*power(x,n-1);

    if(n==0) return 1;
    return x*power(x,n-1);
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    int result = power(x,n);
    cout<<result<<endl;
    return 0;
} 