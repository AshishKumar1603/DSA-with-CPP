#include <bits/stdc++.h>
using namespace std;

//n-i-1 formula kyu?
// Array 0-indexed hota hai. n=6 ke liye last index = 5 = n-1.
// i=0 ka mirror: n-0-1 = 5  |  i=1 ka mirror: n-1-1 = 4  |  i=2 ka mirror: n-2-1 = 3
// Formula: mirror_index = n - i - 1

void SwapNumber(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }else{
        swap(arr[i], arr[n-i-1]);
        SwapNumber(i+1, arr, n);
    }
}

int main(){
    int n;
    cout<<"Enter the size of arr : ";
    cin>>n;
    cout<< "Enter the value : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    SwapNumber(0, arr, n);
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}