//You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive)

#include <bits/stdc++.h>
using namespace std;

int MissingElement(vector<int> &arr){
    int n =arr.size()+1;

    long long totalSum = (long long)n *(n+1)/2;

    long long sum =0;

    for(int x :arr){
        sum +=x;
    }

    return totalSum -sum;

}

//using XOR

/* int MissingElement(vector<int> &arr){
    int n = arr.size()+1;

    int XOR1 = 0;
    int XOR2 = 0;

    for(int i =1; i<=n; i++){
        XOR1 ^= i;
    }

    for(int x :arr){
        XOR2 ^=x;
    }

    return XOR1 ^ XOR2;
} */

int main(){
    int size;
    cout<<"Enter the size of arr: ";
    cin >> size;   

    vector<int> arr(size);

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Missing Element : "<<MissingElement(arr);

}