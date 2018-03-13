#include <string>
#include <iostream>
#include <memory>
#include "lib/factoryFlag.hpp"

int main() {

    std::string option;
    std::cin >> option;

    auto ptr  = FactoryFlag::create(option);
    auto flag = std::unique_ptr<Flag>(ptr);
    if (flag)
        flag->show_flag();

    return 0;
}
