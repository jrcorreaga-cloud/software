#include <iostream>
#include <cassert>
#include "../src/bib.hpp"
void testToUpperCase() {
    assert(toUpperCase("hello") == "HELLO");
    assert(toUpperCase("World") == "WORLD");
    std::cout << "toUpperCase tests passed!" << std::endl;
}
int main() {
    testToUpperCase();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
