#include <iostream> // " <iostream> is a header file in the C++ Standard Library that provides stream-based input and output functionality through objects like std::cin and std::cout."
using namespace std; // Using the standard namespace allows us to use cout and endl without the std:: prefix. 


int main() { // The main function is the entry point of the program. It returns an integer value (0 in this case) to indicate that the program ended successfully.
    cout << "Hello World!" << endl; // cout(identifier) is used to print "Hello World!" to the console, followed by endl which adds a new line after the output.
   std::cout << "Welcome to C++ programming!" << std::endl; // Using std::cout and std::endl with the std namespace prefix to print another message to the console. 
    return 0; // Return 0 indicates that the program ended successfully. 
}    