#include <iostream>
#include <cassert>
#include "../src/bib.hpp"
void testToUpperCase() {
    assert(toUpperCase("hello") == "HELLO");
    assert(toUpperCase("World") == "WORLD");
    std::cout << "toUpperCase tests passed!" << std::endl;
}
void testFibonacci() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);
    std::cout << "fibonacci tests passed!" << std::endl;
}
int main() {
    testToUpperCase();
    testFibonacci();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
