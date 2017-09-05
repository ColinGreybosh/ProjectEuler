#include <iostream>

/* The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

int getSumOfSquaresFromRange(int start, int end)
{
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        sum += (i*i);
    }

    return sum;
}

int getSquareOfSumFromRange(int start, int end)
{
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        sum += i;
    }

    return (sum*sum);
}

int main(int argc, char* args[])
{
    int rangeStart = 1;
    int rangeEnd = 100;

    int difference = (getSquareOfSumFromRange(rangeStart, rangeEnd) - getSumOfSquaresFromRange(rangeStart, rangeEnd));
    
    std::cout << difference;

    getchar();

    return 0;
}