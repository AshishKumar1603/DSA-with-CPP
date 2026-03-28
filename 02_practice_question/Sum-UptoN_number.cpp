#include <iostream>
using namespace std;


//-----------xxxxxxx sum of all numbers up to N xxxxxxx-----------------
 void SumUptpoN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
         sum += i;
    }
    cout << "Sum is : " << sum << endl;
}

int main(){
    int n;
    cout << " Enter a number: ";
    cin >> n;
    SumUptpoN(n);
} 