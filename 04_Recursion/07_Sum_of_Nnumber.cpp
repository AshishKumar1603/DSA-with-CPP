//What is parameterised recursion?

//The function carries its progress forward through its parameters — not through a local variable. Each call passes the updated value directly into the next call.

/* The two rules of parameterised recursion:

1. Base case: a condition on the parameter that stops the recursion.

2. Recursive case: call yourself with the parameter moved one step closer to the base case. */

//Without parameter — BROKEN

/* void f() {
  int cnt = 0; // reset every call
  if(cnt==4) return;
  cnt++;
  f();  // cnt lost here!
} */

//With parameter — CORRECT

/* void f(int cnt) {
  // cnt arrives already set
  if(cnt==4) return;
  f(cnt+1); // pass it forward
} */

#include <bits/stdc++.h>
using namespace std;

void PrintSum(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }else{
        PrintSum(i-1, sum+i);
    }
}

int main(){
    int n;
    cin>>n;
    PrintSum(n,0);
}

