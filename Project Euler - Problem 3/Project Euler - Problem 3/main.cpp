/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>
#include "main.h"

bool isPrime(long long numberToCheck)
{
    bool isPrime = true;

    if (numberToCheck < 0)
    {
        return false;
    }
    else if (numberToCheck == 0 || numberToCheck == 1)
    {
        return false;
    }
    else if (numberToCheck == 2)
    {
        return true;
    }
    else if (numberToCheck % 2 == 0)
    {
        return false;
    }
    else
    {
        for (long long i = 3; i <= static_cast<long long>(sqrt(numberToCheck)); i += 2)
        {
            if (numberToCheck % i == 0)
            {
                isPrime = false;
            }
        }
    }

    return isPrime;
}


int main(int argc, char* args[])
{
    const long long int divisor = 600851475143;
    long long largestPrimeFactor = 0;

    if (ceil(sqrtl(600851475143)) % 2 == 0)
    {

    }

    std::cout << largestPrimeFactor;

    getchar();

    return 0;
}