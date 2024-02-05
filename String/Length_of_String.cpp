#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i ;
    string str = "welcome";
   
    
    //  There are some different ways to find out the length of  a string.

    // cout<<str.length()<<endl;     ------> The output is 7.

    // cout<<str.size()<<endl;           -------> The output i also 7.

    // while(str[i])
    //     i++;
    
    // cout<<i<<endl;


    for( i =0;str[i];i++);
    cout<<i<<endl;

    return 0;
}