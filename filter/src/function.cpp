#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

#include "function.h"

int *filtro (int * first, int * last)
{
    while(first != last) 
    {
        if(first <= 0)
        {
            auto i(first);
            while(i != last-1)
            {
                *i = *(i+1);
                ++i;
            }
            last--;
        }
        else
        {
            first++;
        }
    }
    return first;
    return nullptr;
}

int *mega_filtro (int * first, int * last)
{
    auto slow(first);
    auto fast(first);

    while(fast != last)
    {
        if(*fast > 0)
        {
          *slow = *fast;
            slow++;
        }
        fast++;
    }
    return slow;
}

int main () 
{
    int tamanho;
    int array[tamanho];
    
    for (int i = 0; i < tamanho; i++)
    {
        cin >> array[i];
    }

    std::cout << "Array original = [ ";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << array[i];
    }
    std::cout << " ]" <<  std::endl;

    auto new_end = mega_filtro(begin(array), end(array));

    std::cout << ">>> Array filtrado  = [ ";
    std::copy( std::begin(array), new_end,  std::ostream_iterator<int>( std::cout, " " ) );
    std::cout << " ]" <<  std::distance(std::begin(A), new_end) << "\n";

    return EXIT_SUCCESS;
}
