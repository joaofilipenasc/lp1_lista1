#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

#include "function.h"

int *filtro (int *first, int *last) {
    while(first != last) {
        if(first <= 0) {
            auto i(first);
            while(i != last-1) {
                *i = *(i+1);
                i++;
            }
            last--;
        }
        else {
            first++;
        }
    }
    return first;
    return nullptr;
}

int *mega_filtro(int *first, int *last) {
    auto slow(first);
    auto fast(first);

    while(fast != last) {
        if(*fast > 0) {
          *slow = *fast;
            slow++;
        }
        fast++;
    }
    return slow;
}

int main () {
    
}
