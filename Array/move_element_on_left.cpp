// move all -ve numbers of an array to the left side. 
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// here we use sort function as result our array will be sorted so all -ve elements are on left side.
// void move_elements(int arr[],int n){
//     sort(arr,arr+n);
// }

void move_elements(int arr[],int n){
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i != j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_elements(arr,n);
    printArray(arr,n);
    return 0;
}