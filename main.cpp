#include <iostream>
#include "algorithms/StringAlgorithms.h"

int main() {
    std::string testString = "Hello World";
    std::string output = StringAlgorithms::reverseString(testString);
    std::cout << output;
}
