#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  in binary search we find our key with the help of very easy strategy. we just split our whole array into two parts 
// from mid and they compare our key , in which part of our key is present in array we just search only that part of array
int  binary_search(int array[],int key,int len,int start,int end){
    while(start<=end){
        int mid = start + (end-1) / 2;
        if(array[mid] == key){
            return mid;
        }if(array[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
}
int main(){
    int array[] = {2,7,9,11,16,21,28,45,55};
    int key = 21;
    int start = 0;
    int len = sizeof(array);
    int end = len-1;
    cout<<binary_search(array,key,len,start,end);
    return 0;
}