#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// here we cheak our both strings are anagram to each other or not. so we just make 2 integer in which we store the length 
// of both the strings and cheak both strings are equal or not. If they are not equal then how can they be the anagram to each other
// .second we soth both the strings and after sorting our strings in increasing order. now with the help of for loop 
// we easily can cheak our strings are anagram to not.

// bool anagram(string str1,string str2){
//     int n1 = str1.length();
//     int n2 = str2.length();
//     if(n1 != n2){
//         return false;
//     }
//     sort(str1.begin(),str1.end());
//     sort(str2.begin(),str2.end());
//     for(int i =0;i<n1;i++){
//         if(str1[i] != str2[i]){
//             return false;
//         }
//     }
//     return true;
// }

// hmne ek  character array bna lia 26 ka or sabke value  zero krde firr hmne first string traverse kre or us charcter array 
// m string k hisab s ++ krte gai. same hmne second string k lia kia lekin usme hm value -- krde takki ager dono string anagram 
// hue to value zero aa gaige verna kuch ka kuch value rh jaige hmen fir cheak krlia ager value zero  h to string anagram h vrna nhi h 

bool anagram(string str1 ,string str2){
    int arr[26] = {0};
    for(char x:str1){
        arr[x-'a']++;
    }
    for(char x:str2){
        arr[x-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0) return false;
    }
    return true;
}


int main(){
    string str1 = "silent";
    string str2 = "listen";
    if(anagram(str1,str2)){
        cout<<"Both strings are anagram to each other";
    }else{
        cout<<"there is some problem pls cheak and update your string";
    }
    return 0;
}