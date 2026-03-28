#include <bits/stdc++.h>
using namespace std;

void Print1toN(int i, int n){
    if(i<1){
        return;
    }else{
        Print1toN(i-1, n);
        cout<<i<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    Print1toN(n,n);
}