#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

struct Animal {
    std::string name;
    std::string breed;
    int barnNumber;

    void speak() const;
};

#endif
