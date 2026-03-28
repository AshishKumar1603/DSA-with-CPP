#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum; // Declare three integer variables: num1, num2, and sum.
    
    cout << "Enter the first number: "; // Prompt the user to enter the first number.
    cin >> num1; // Read the first number from the user and store it in num1.
    
    cout << "Enter the second number: "; // Prompt the user to enter the second number.
    cin >> num2; // Read the second number from the user and store it in num2.
    
    sum = num1 + num2; // Calculate the sum of num1 and num2 and store it in the variable sum.
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl; // Output the result to the console.
    
    return 0; // Return 0 to indicate that the program ended successfully.
}