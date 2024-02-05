#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i;
    int word=0;
    string str="Hello how are you";
    for(i=0;str[i];i++){
        if(str[i]==' ' && str[i-1]!=' '){
            word++;
        }
    }
    cout<<word+1<<endl;
    return 0;
}