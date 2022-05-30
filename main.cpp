#include <iostream>
#include "projects/Magic8Ball.h"

int main() {
    // Question is not used by fortune method. Exists to allow user input
    // before the Magic8Ball provides a random response
    std::string question;

    std::cout << "Please ask a question in order to know your fortune:\n";
    std::cin >> question;
    std::cout << "Magic 8 ball says... " << Magic8Ball::fortune(question);
}
