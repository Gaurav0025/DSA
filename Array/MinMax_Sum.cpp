// Question : Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// our first approch is using the sort function which is inbuild and easily add the last index and first index of the array But this is not good approch so we do this with some different approch.


// int findsum( int arr[], int n){
//     sort(arr,arr+n);
//     return arr[n-1] + arr[0];
// }

// we use the min max function to find out the minimum and maximum element present in our array 

// int findsum(int arr[],int n){
//     int max_element = arr[0];
//     int min_element = arr[0];
//     for(int i=1;i<n;i++){
//         max_element = max(max_element,arr[i]);
//         min_element = min(min_element,arr[i]);
//     }
//     return max_element + min_element;
// }

//  if you dont want to use ant inbuilt function like sort,min,max then you have to use if else statement to solve this question

int findsum(int arr[],int n){
    int max_element = arr[0];
    int min_element = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max_element) max_element = arr[i];
        if(arr[i]<min_element) min_element = arr[i];
    }
    return max_element + min_element;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = findsum(arr,n);
    cout<<ans;
}