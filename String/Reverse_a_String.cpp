#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  here we make a  simple function in which ve just run our for loop and swap the elements 
//  and hence our string will be reversed.


// void reverse_a_string(string &str){
//     for(int i=0;i<str.length()/2;i++){
//         swap(str[i],str[str.length()-i-1]);
//     }
// }
// int main(){
//     string str="welcome";
//     reverse_a_string(str);
//     cout<<str<<endl;
//     return 0;
// }

//  with the help of while loop



//  very easiest approch for me for reverse a string with the help of recursive function.
// void reverse_a_string(string &str){
//     reverse(str.begin(),str.end());
// }
// int main(){
//     string str="welcome";
//     reverse_a_string(str);
//     cout<<str<<endl;
//     return 0;
// }


int main(){
    string str="WELCOME";
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}