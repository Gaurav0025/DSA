#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // Code for upper case letter to lower case letter. 

    // int i;
    // string str = "WELCOME";
    // for(i=0;str[i];i++){
    //     str[i]=str[i]+32;
    // }
    // cout<<str<<endl;

    // Code for lower case letter to upper case letter.

    // int i;
    // string str="welcome";
    // for(i=0;str[i];i++){
    //     str[i]=str[i]-32;
    // }
    // cout<<str<<endl;


    // code for if our string containes some upper case letters and some lower case letters.

    int i;
    string str = "WelCOme";
    for(i=0;str[i];i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }else if(str[i]>='a' && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;
    return 0;
}