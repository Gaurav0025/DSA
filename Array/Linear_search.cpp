#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  in linear search we traverce our array from first position to last position and cheak one by 
// one is our element is equal to key element and they if our key is present in our arraya they we just return the index 
//  of the elmenet where our key is found.

int search(int array[],int key,int len){
    for(int i=0;i<len;i++){
        if(array[i] == key){
            return i;
        }
    }
}
int main(){
    int array[] = {2,5,19,16,39};
    int key = 16;
    int len = sizeof(array);
    cout<<search(array,key,len);
    return 0;
}