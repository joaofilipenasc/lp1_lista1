#include "function.h"

#include <iterator>
using std::iter_swap;

/*! 
 * 
*/

template <size_t SIZE>
void reverse(std::array<std::string, SIZE> &arr) {
    auto first = arr.begin();
    auto last = arr.last();

    while((first != last) && (first != --last)) {
        std::iter_swap(first, last);
        ++first;
    }
}
