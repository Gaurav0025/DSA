#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// we make a temp integer and with the help of this we reversed our array.
// void reversedArray(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }


// without the help of temp variable.
// void reversedArray(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     int mid = n/2;
//     while(start < mid){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// with the help of reverse function which is inbuilt function in our array.
// void reversedArray(int arr[],int n){
//     reverse(arr,arr+n);
// }


// using stack
// void reversedArray(int arr[],int n){
//     stack<int> st;
//     for(int i=0;i<n;i++){
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = st.top();
//         st.pop();
//     }
// }


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversedArray(arr,n); 
    printArray(arr,n);  
    return 0;
}