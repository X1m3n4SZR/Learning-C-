#include <iostream>

int main()
{
    // mathematical expressions
    int x = 10;
    //x = x + 1;
    x++; //increment operator, x-- decrement operator 
    int z = ++x;
    //int z = x + y; // for division, must convert one of the numbers from int to double
                   // % returns remainder
    std::cout << x;
    std:: cout << z;

    return 0;
}