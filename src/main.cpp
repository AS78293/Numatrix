#include <iostream>
#include "Vector1D.hpp"

int main() {
    Vector1D a;             // empty
    Vector1D b(5, 1);       // 5 elements, all 1
    Vector1D c = {1, 2, 3}; // from list

    a.print(); // []
    b.print(); // [1 1 1 1 1]
    c.print(); // [1 2 3]

    std::cout << "Size of c: " << c.size() << "\n";

    c[1] = 10;  // modify
    c.print();  // [1 10 3]

    return 0;
}
