# 🧮 Numatrix

**Numatrix** is a lightweight numerical computing library built in modern **C++20**, inspired by Python’s **NumPy**.  
It’s designed to be simple, modular, and educational — perfect for understanding how numerical libraries work under the hood.

---

## 🚀 Overview

Numatrix provides high-level **array objects** with intuitive syntax for numerical operations, while maintaining **low-level performance** through contiguous memory layouts.

The project aims to gradually evolve from simple 1D vectors to full N-dimensional arrays, mimicking core NumPy functionality — but implemented from scratch in clean C++.

---

## 🧱 Current Progress (Phase 1)

✅ **Vector1D** – A fully working 1D numerical array class  
- Dynamic, contiguous memory using `std::vector`
- Supports initialization via:
  ```cpp
  Vector1D a;             // empty
  Vector1D b(5, 1);       // [1 1 1 1 1]
  Vector1D c = {1, 2, 3}; // [1 2 3]
