#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }

    // int fact =1;
    // for(int i=2; i<=n; i++){
    //     fact*=i;
    // }
    // return fact;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}