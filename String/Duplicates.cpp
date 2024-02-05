#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  here we use concept of unordered_map which we learn in the video of stl. so we just use it and put all the elements 
//  in undorded_map one by one and after thet we just print all the elements whose value is greater then 1 .
// so it means they are repeated in our string.

void printDuplicates(string str){
    unordered_map<char,int> mp;
    for(int i =0;i<str.length();i++){
        mp[str[i]]++;
    }
    for(auto x : mp){
        if(x.second > 1){
            cout<<x.first << ", count " << x.second<<endl;;
        }
    }
}
int main(){
    string str = "geekforgeeks";
    printDuplicates(str);
    return 0;
}