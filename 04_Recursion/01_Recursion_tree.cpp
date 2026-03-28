//Recursion : When a function call itself, untll a specfic condition is met.

//Recursion is when a function calls itself. Internally, each function call is stored on the call stack — a region of memory that tracks active function calls.

#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case — stop recursion
    if (n == 0) return 1;

    // Recursive case — call itself
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(4);  // Output: 24
    return 0;
}

//Stack overflow happens when the call stack runs out of memory — usually because recursion goes too deep without hitting a base case.

void f(){
    cout<< "1";
    f(); //here the function call itself again and again without hitting any base case..
}

int main(){
    f();
    return 0;
}


//----------Base condition : the condition we use to stop the function call stack. -------------

int cnt = 0;
void f(){
    //static int cnt =0; // initialized only once.
    if(cnt == 4){
        return;
    }else{
        cout<< cnt;
        cnt++;
        f();
    }
}

int main(){
    f();
    return 0;
}


//Recursion Tree: A recursion tree is just a visual tool to represent how recursive calls branch out — it's not a separate data structure, just a diagram we draw to understand recursion.

    






