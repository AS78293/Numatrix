#pragma once
#include <vector>
#include <initializer_list>
#include <iostream>

class Vector1D {
private:
    std::vector<int> data; // holds all numbers (contiguous memory)

public:
    // --- constructors ---
    Vector1D();                                // default: empty
    Vector1D(size_t n, int value = 0);         // length n, fill with value
    Vector1D(std::initializer_list<int> list); // from {1,2,3}

    // --- basic info ---
    size_t size() const;      // how many elements
    bool empty() const;       // check if empty

    // --- element access ---
    int& operator[](size_t index);             // get/set element
    const int& operator[](size_t index) const; // read-only

    // --- print helper ---
    void print() const;
};
