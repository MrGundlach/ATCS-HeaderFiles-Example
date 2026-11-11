# ATCS-HeaderFiles-Example

`animal.h` declares an `Animal` with a name, breed, barn number, and a
`speak()` method. `animal.cpp` implements the method, which prints a generic
greeting using the animal's name.

```cpp
#include "animal.h"

int main() {
    Animal animal{"Daisy", "Jersey", 3};
    animal.speak();
}
```

Compile a program using the struct with
`g++ -std=c++11 main.cpp animal.cpp -o animals`.