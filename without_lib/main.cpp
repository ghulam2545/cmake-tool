#include <iostream>

#include "some_header.hpp"

int main() {
    std::cout << gh::adder(3, 4) << '\n';

    const std::string msg = "some lol message on stdout";
    gh::print(msg);

    return 0;
}