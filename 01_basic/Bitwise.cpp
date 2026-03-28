#include <iostream>
using namespace std;

int main(){
    int a = 5; // 0000 0101
    int b = 10; // 0000 1010
    int n;
    cin >> n;
    //Performs AND on each bit.
    // 1 & 1 = 1  
    // 1 & 0 = 0  
    // 0 & 1 = 0  
    // 0 & 0 = 0

    cout << (a & b) << endl; // 0000 0001 -> 0
    if (n & 1)
    cout << "Odd\n";  //Last bit of odd number is always 1.
else
    cout << "Even\n";

    //Bitwise OR (|)
    // 1 | 1 = 1  
    // 1 | 0 = 1  
    // 0 | 1 = 1  
    // 0 | 0 = 0

    cout << (a | b) << endl; // 0000 1101 -> 15
    cout << (a ^ b) << endl; // 0000 1100 -> 15

    // Bitwise NOT (~)

    // Flips all bits.
    cout << (~a) << endl; // 1111 1010 -> -6
    //Because C++ uses 2’s complement representation for negative numbers.


    // left shift operator (<<)
    // Shifts bits to the left and fills the rightmost bits with 0.
    // it is equivalent to multiplying the number by 2 for each shift.
    cout << (a << 1) << endl; // 0000 1010 -> 10
    cout << (a << 2) << endl; // 0000 10100 -> 20

    // right shift operator (>>)
    // Shifts bits to the right. The behavior depends on the type of the number (signed or unsigned).
    // For unsigned numbers, it fills the leftmost bits with 0.
    // For signed numbers, it fills the leftmost bits with the sign bit (the most significant bit).
    // it is equivalent to dividing the number by 2 for each shift (for positive numbers).
    cout << (a >> 1) << endl; // 0000 0010 -> 2
    cout << (a >> 2) << endl; // 0000 0001 -> 1


    int x=10;

    cout<<((++x)*(x++))<<endl; // 11*11 = 121

    //break statement in loop
    for(int i=0; i<=5; i++){

        cout<<"Radhe Radhe"<<endl;
         if(i==3)
        break; // loop will terminate when i becomes 3
        
    }

    for(int i=0; i<=5; i++){

        if(i==3)
        continue; // skip the current iteration when i becomes 3
        cout<<"Krishna Krishna"<<endl;
        
    }

     return 0;


}
