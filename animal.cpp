#include "animal.h"

#include <iostream>

void Animal::speak() const {
    std::cout << name << " says hello!\n";
}
