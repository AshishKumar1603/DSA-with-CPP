#include <iostream>
using namespace std;

int main(){
    //Implicit type casting (automatic type conversion)
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2; // num1 is implicitly converted to float
    cout << "Result of implicit type casting: " <<result << endl; // Output: 15.5

    // char to int
    // char ch = 'A';
    // int a = ch + 1; // 'A' is implicitly converted to its ASCII value (65)
    // cout << "ASCII value of 'A' + 1: " << a << endl; // Output: 66

    //int to char
    int x = 65;
    char ch = x; // x is implicitly converted to char (ASCII value 65 corresponds to 'A')
    cout << "Character corresponding to ASCII value 65: " << ch << endl; // Output: A

    //Explicit type casting (type conversion)
    double pi = 3.14159;
    int intpi = (int)pi; // pi is explicitly cast to int, truncating the decimal part
    cout << intpi << endl; // Output: 3


    //Switch case statement
    float a, b;
    cin >> a >> b;
    int op;
    cout << "Enter operator (1 for +, 2 for -, 3 for *, 4 for /): ";
    cin >> op;
    float ans = 0;

    switch(op){
        case 1 :
            ans = a+b;
            break;
        case 2 :
            ans = a-b;
            break;
        case 3 :
            ans = a*b;
            break;
        case 4:
            ans = a/b;
            break;
        default:
            cout << "Invalid Operator\n";
    }
    cout << "Result: " << ans << endl;
}