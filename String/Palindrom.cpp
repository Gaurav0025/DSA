#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// its very naive approch we just make s another string store all the elements of our string and reverse the new string
// now we just compare our all the elements are in equal then we return yes otherwise no.

// string ispalindrom(string s){
//     string p = s;
//     reverse(p.begin(),p.end());
//     if(s==p){
//         return "YES";

//     }else{
//         return "NO";
//     }
// }

// in this approch we run our for loop to the half lenght of our string and with the help of if else condition we cheak 
//  our elements position by position so if the element on zero'th position is similar to the N-1 postion so its a palindrom.

string ispalindrom(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-i-1]){
            return "NO";
        }
        return "YES";
    }
}
int main(){
    string s = "ABCDCBA";
    cout<< ispalindrom(s)<<endl;
    return 0;
}