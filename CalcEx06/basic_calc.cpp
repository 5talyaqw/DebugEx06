#include <iostream>
int add(int a, int b, bool &error) 
{
    if (a == 8200 || b == 8200)
    {
        error = true;
        return 0;
    }
    return a + b;
}

int  multiply(int a, int b, bool& error)
{
    int sum = 0;

    if (a == 8200 || b == 8200)
    {
        error = true;
        return 0;
    }

    for (int i = 0; i < b; i++) 
    {
        sum = add(sum, a, error);
        if (error)
        {
            return 0;
        }
    };
    return sum;
}

int  pow(int a, int b, bool &error) 
{
    if (a == 8200 || b == 8200) 
    {
        error = true;
        return 0;
    }
    int exponent = 1;
    for (int i = 0; i < b; i++) 
    {
        exponent = multiply(exponent, a, error);
        if (error)
        {
            return 0;
        }
    };
    return exponent;
}

int main(void) 
{
    bool error = false;
    int result;
    // Test valid inputs
    std::cout << "Testing valid inputs:" << std::endl;
    result = pow(5, 3, error);
    if (!error) 
    {
        std::cout << result << std::endl;
    }
    else 
    {
        std::cout << "Error occurred during calculation." << std::endl;
    }

    // Test invalid inputs
    std::cout << "\nTesting invalid inputs:" << std::endl;
    result = pow(8200, 3, error);
    if (!error) 
    {
        std::cout << result << std::endl;
    }
    else 
    {
        std::cout << "This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year" << std::endl;
    }

    error = false; // Reset error
    result = multiply(7, 8200, error);
    if (!error) 
    {
        std::cout << result << std::endl;
    }
    else 
    {
        std::cout << "This user is not authorized to access 8200, please enter different numbers, or try to get clearance in 1 year" << std::endl;
    }

    return 0;
}