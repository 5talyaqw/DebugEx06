#include <iostream>
#include <stdexcept>


int add(int a, int b) 
{
    if (a == 8200 || b == 8200) 
    {
        throw std::invalid_argument("This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year");
    }
    return a + b;
}

int  multiply(int a, int b) 
{
    if (a == 8200 || b == 8200) 
    {
        throw std::invalid_argument("This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year");
    }
    int sum = 0;
    for (int i = 0; i < b; i++) 
    {
        sum = add(sum, a);
    };
    return sum;
}

int  pow(int a, int b) 
{
    if (a == 8200 || b == 8200) 
    {
        throw std::invalid_argument("This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year");
    }
    int exponent = 1;
    for (int i = 0; i < b; i++) 
    {
        exponent = multiply(exponent, a);
    };
    return exponent;
}

int main(void) 
{
    //testing valid inputs first and then invalid.
    std::cout << "Testing valid inputs: " << std::endl;
    try
    {
        std::cout << pow(5, 3) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTesting invalid inputs: " << std::endl;
    try
    {
        std::cout << pow(8200, 3) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Testing invalid inputs: " << std::endl;
    try
    {
        std::cout << multiply(5, 8200) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Testing invalid inputs: " << std::endl;
    try
    {
        std::cout << add(8200, 3) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}