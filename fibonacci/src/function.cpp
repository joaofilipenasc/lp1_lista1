#include "function.h"

using namespace std;

unsigned int fib(unsigned int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return (fib(num - 1) + fib(num - 2));
    }
}

std::vector<unsigned int> fib_below_n(unsigned int n) 
{
    
    int n = 0;
    int result = 0;

    cin >> n;

    for (int i = 0; (result = fib(i)) < k; i++) 
    { 
        cout << result << endl; 
    }               

    return std::vector<unsigned int>{};
}
