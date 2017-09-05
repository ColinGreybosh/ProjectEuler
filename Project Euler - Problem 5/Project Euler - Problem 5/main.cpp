#include <iostream>

/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

bool isEvenlyDivisibleFromRange(int dividend, int start, int end)
{
    bool isDivisibleByAllDivisors = true;

    for (int i = start; i <= end; i++)
    {
        if (i != 0)
        {
            isDivisibleByAllDivisors = (dividend % i == 0);
        }
        if (!isDivisibleByAllDivisors)
        {
            return false;
        }
    }

    return isDivisibleByAllDivisors;
}

int main(int argc, char* args[])
{
    int dividend = 0;
    bool multipleFound = false;

    do {
        dividend++;
        multipleFound = isEvenlyDivisibleFromRange(dividend, 1, 20);
    } while (!multipleFound);

    std::cout << dividend;

    getchar();

    return 0;
}