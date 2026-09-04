#include <iostream>

int main() {
    //int file_size = 0; //C++ doesn't automatically initalize variable to 0
    //int counter = 0;

    //exercise 1, switching values of a and b
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a;

    //constants
    const double pi = 3.14; // use const to declare something as a constant

    //naming conventions
    int file_size; // Snake Case, use lowercase letters for var and const and use _ to separate words
    int FileSize; // Pascal Case, use uppercase and combines words
    int fileSize; // Camel Case, first word lower second word upper
    int iFileSize; // Hungarian Notation, very old and not really relevant but fun to know

    double sales = 9.99;
    
    std::cout << "Hello World"; //This line is called a statement
    
    std::cout << file_size;

    return 0; //0 tells operating system that the program has ended successfully
}

