#include "bib.hpp"
#include <cctype>
std::string toUpperCase(const std::string& input) {
    std::string result = input;
    for (char &c : result) {
        c = std::toupper(c);
    }
    return result;
}
