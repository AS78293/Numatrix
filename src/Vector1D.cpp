#include "Vector1D.hpp"

// default
Vector1D::Vector1D() : data{} {}

// create vector of length n, filled with value
Vector1D::Vector1D(size_t n, int value) : data(n, value) {}

// create from initializer list {1,2,3}
Vector1D::Vector1D(std::initializer_list<int> list) : data(list) {}

// how many elements
size_t Vector1D::size() const { return data.size(); }

// check if empty
bool Vector1D::empty() const { return data.empty(); }

// access element
int& Vector1D::operator[](size_t index) { return data[index]; }

// access element (read-only)
const int& Vector1D::operator[](size_t index) const { return data[index]; }

// print vector like [1 2 3]
void Vector1D::print() const {
    std::cout << "[";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i + 1 < data.size()) std::cout << " ";
    }
    std::cout << "]\n";
}

