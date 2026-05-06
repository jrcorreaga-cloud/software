#include "bib.hpp"
#include <cctype>
std::string toUpperCase(const std::string& input) {
    std::string result = input;
    for (char &c : result) {
        c = std::toupper(c);
    }
    return result;
}
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
