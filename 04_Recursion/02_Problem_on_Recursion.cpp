//Print Name N times:

#include <bits/stdc++.h>
using namespace std;

void PrintName( int i, int n){
    if(i>n){
        return;
    }else{
        cout<<"Ashish"<<endl;
        PrintName(i+1,n);
    }

}

int main(){
    int n;
    cin>>n;
    PrintName(1, n);

}

//time complexity: Big O(N);
// space cpmlexity is Stack Space;