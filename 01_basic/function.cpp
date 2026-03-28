#include <iostream>
using namespace std;

// void printLine(){
//     for(int i=0; i<5; i++){
//         cout << "Radhe Radhe\n";
//     }
//     cout << "I got everything I want\n";
// }

// void printSum(int a, int b, int c){
//     int ans = a+b+c;
//     cout << "Sum is: " << ans <<endl;

// }


//xxxxxxxxxxxxxx---------------function declaration ---------------xxxxxxxxxxxxxx

// void printSum(int a, int b, int c);

// int main(){

    // int sum=printSum(10, 20, 30); // Function call with arguments
    // cout << "Sum is: " <<sum << endl; // Output: 60
    // return 0;

//     printSum(45, 44, 11);
//         return 0;
// }

// int printSum(int a, int b, int c){
//     int ans = a+b+c;
//     return ans;
// }

// void printSum(int a, int b, int c){
//     int ans = a+b+c;
//     cout << "Sum is: " << ans <<endl;

// }

// ----------------xxxxxxxxxxxxxx-----------------



// int printSum(int a, int b, int c){
//     int ans = a+b+c;
//     return ans;
// }
 
// int main(){

//     // cout << "Hello World\n";
//     // printLine(); // Function call

//     int sum=printSum(10, 20, 30); // Function call with arguments
//     cout << "Sum is: " <<sum << endl; // Output: 60
//     return 0;
// }



//-------------xxxxxx max of 3 no. a,b,c; xxxxxx--------------

/* int MaxOfThree(int a, int b, int c){
    if(a>=b && a>=c){
        cout << "a is greater" << endl;
    }
    else if(b>=a && b>=c){
        cout << "b is greater" <<endl;
    }
    else{
        cout << "c is greater" << endl;
    }

    return 0;
    
}

int main(){
    MaxOfThree(3, 6, 6);
    return 0;
} */

/* // using inbuilt max function;
int printMax(int num1, int num2, int num3){
    int ans1 = max(num1, num2);// max function is used to find the maximum of two numbers.
    int finalans = max(ans1, num3);// max function is used to find the maximum of two numbers.
    //cout << "maximum no. is " << finalans << endl;
    return finalans;
}

int main(){
    int maxNum = printMax(4, 8, 6);// Function call with arguments
    cout << "Maximum number is: " << maxNum << endl;
    return 0;
} */


//------------xxxxxxx counting 1 to N xxxxxxx-----------------

/* void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout << i <<endl;
    }
}

int main(){
    printCounting(10);
    return 0;
} */

// user input counting from 1 to N

/* void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout << i <<endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printCounting(n);
    return 0;
} */


//------------xxxxxxx checking even or odd xxxxxxx-----------------

//-----------xxxxxxx sum of all numbers up to N xxxxxxx-----------------

/* void SumUptpoN(int n){
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
} */


// ------------xxxxxxx check prime of a number xxxxxxx-----------------

/* bool isPrime(int n){
    if(n <=1){
        return false;
    }
    for(int i = 2; i*i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;
    bool prime = isPrime(n);
    if(prime){
        cout << n <<" "<< " is a prime number" <<endl;
    }
    else{
        cout << n <<" "<< " is not a prime number" <<endl;
    }
} */

//------------xxxxxxx find area of circle xxxxxxx-----------------

/* float areaOfCircle(float r){
    float area = 3.14 * r *r;
    return area;
}

int main(){
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float Area = areaOfCircle(radius);
    cout << "The area of the circle is: " << Area << endl;
} */

//------------xxxxxxx find factorial of a number xxxxxxx-----------------

/* int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial of " << n << "is: "<< fact << endl;
} */

//------------xxxxxxx print all even numbers up to N xxxxxxx-----------------

/* void printEvenNumber(int n){
     for(int i=2; i<=n; i+=2){
        cout << i << endl;
       
    }
}

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    printEvenNumber(n);
   
}  */

//------------xxxxxxxxx print all prime number upto n xxxxxxx----------

/* bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
} */


//--------------xxxxxxxxxxx print all digit of an integer xxxxxxxxx-------

/* void printdigit(int n){
     while(n > 0){
        int digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    }

}

int main(){
    int n;
    cout << "Enter an Integer: " ;
    cin >> n;
    printdigit(n);
    return 0;
} */

//----------xxxxxxxxxxx create a number using digit xxxxxxxxxxx-------------

int createNumber(int n){
    int digit;
    int number = 0;

    for(int i = 1; i <= n; i++){
        cout << "Enter digit: ";
        cin >> digit;

        number = number * 10 + digit;
    }

    return number;
}

int main(){
    int n;
    cout << "How many digits: ";
    cin >> n;

    int result = createNumber(n);

    cout << "Number formed: " << result << endl;
}