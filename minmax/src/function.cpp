
#include <iostream>
#include <vector>

using namespace std;

#include "function.h"

template<class It>
It min(It primeiro, It ultimo) 
{
  
  if(It primeiro = ultimo) {
    return ultimo;
  }

  It menor = primeiro;
  ++primeiro;
  
  for(; primeiro != ultimo; ++ primeiro) {
    if(*primeiro < *ultimo) {
      menor = primeiro;
    }
  }

  return menor;
}

std::pair<int,int> min_max(int V[], size_t n) 
{
  
   

  

  return {-1,-1};
}