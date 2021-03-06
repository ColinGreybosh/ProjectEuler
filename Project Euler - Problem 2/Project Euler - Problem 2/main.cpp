/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>
#include <vector>

int main()
{
    int i = 0;
    int current;
    int sum = 0;
    std::vector<int> fibonacci;

    fibonacci.push_back(1);
    fibonacci.push_back(2);

    do {
        current = fibonacci[i];

        fibonacci.push_back(fibonacci[i] + fibonacci[i + 1]);

        i++;
    
    } while (current < 1E6);

    for (int j = 0; j < fibonacci.size(); j++)
    {
        std::cout << j << "\t" << fibonacci[j] << std::endl;

        if (fibonacci[j] % 2 == 0)
        {
            sum += fibonacci[j];
        }
    }

    std::cout << std::endl << sum;

    getchar();
}