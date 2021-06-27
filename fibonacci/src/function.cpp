#include "function.h"

unsigned int fib(unsigned int num) {
    if (num == 0 || num == 1) {
        return num;
    }
    else {
        return (fib(num - 1) + fib(num - 2));
    }
}

std::vector<unsigned int> fib_below_n(unsigned int n) {
    n = 0;
    int result = 0;

    std::cin >> n;

    for (int i = 0; (result = fib(i)) < result; i++) { 
        std::cout << result << std::endl; 
    }               
    return std::vector<unsigned int>{};
}

int main () {
    int numero;
    std::cin >> numero;

    std::vector<unsigned int> vetor = fib_below_n(numero);
    std::vector<unsigned int>::iterator it;

    it = vetor.begin();

    while(it != vetor.end()) {
        std::cout << *it;
    }
    std::cout << std::endl;
}