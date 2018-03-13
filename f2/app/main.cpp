#include <string>
#include <iostream>
#include <memory>
#include "lib/factoryMap.hpp"

int main() {

    std::string option;
    std::cin >> option;

    auto ptr = FactoryMap::create(option);
    auto map = std::unique_ptr<Map>(ptr);
    if (map)
        map->show_map();

    return 0;
}
