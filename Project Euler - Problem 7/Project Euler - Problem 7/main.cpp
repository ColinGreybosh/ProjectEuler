#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>

/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number? */

bool isPrime(int numberToCheck)
{
    bool isPrime = true;

    if (numberToCheck % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = static_cast<int>(sqrt(numberToCheck)+1); i > 1; i--)
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
    int duration;

    auto tStart = std::chrono::high_resolution_clock::now();

    std::vector<int> listOfPrimes;
    listOfPrimes.push_back(2);

    int currentNum = 1;

    do
    {
        currentNum += 2;
        if (isPrime(currentNum))
        {
            listOfPrimes.push_back(currentNum);
        }

    } while (listOfPrimes.size() != 10001);

    auto tEnd = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::milliseconds>(tEnd - tStart).count();

    std::cout << "FOUND #10001 in " << duration << "ms.\n\n" << listOfPrimes[10000];

    getchar();

    return 0;
}