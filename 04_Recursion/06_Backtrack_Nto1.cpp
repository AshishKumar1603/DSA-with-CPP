#include <bits/stdc++.h>
using namespace std;

void PrintNto1(int i, int n){
    if(i>n){
        return;
    }
    else{
        PrintNto1(i+1, n);
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    PrintNto1(1, n);
}