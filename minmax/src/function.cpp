#include <iostream>
#include <vector>

using namespace std;

#include "function.h"

template<class ForwardIterator>
std::pair<ForwardIterator, ForwardIterator> 
min_max(int V[], size_t n) {
  
  std::pair<ForwardIterator, ForwardIterator> result(V.begin(), V.begin());
  
  if (V.begin() == V.end()) { 
    return result; 
  }
  if (++V.begin() == V.end()) {
    return result;
  }
  if (comp(*V.begin(), *result.(V.begin()))) {
    result.second = result.(V.begin());
    result.(V.begin()) = V.begin();
  } else {
      result.second = V.begin();
  }
  while (++V.begin() != V.end()) {
    ForwardIterator i = V.begin();
    if (++V.begin() == V.end()) {
      if (comp(*i, *result.(V.begin()))) {
        result.(V.begin()) = i;
      }
      else if (!(comp(*i, *result.second))) {
        result.second = i;
        break;
      }
    } else {
      if (comp(*V.begin(), *i)) {
        if (comp(*V.begin(), *result.(V.begin()))) {
          result.(V.begin()) = V.begin();
        }
        if (!(comp(*i, *result.second))) {
          result.second = i;
        }
      } else {
        if (comp(*i, *result.(V.begin()))) {
          result.(V.begin()) = i;
        }
        if (!(comp(*V.begin(), *result.second))) {
          result.second = V.begin();
        }
      }
    }
  }
  return result;
}