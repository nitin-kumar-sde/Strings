# ⏰ String

A lightweight, custom implementation of the standard `std::string` class, providing essential string operations with dynamic memory management.

---

# 💵 Features

- Dynamic character storage  
- Copy and move semantics  
- Operator overloading (`+`, `=`, `[]`, `==`, `!=`, etc.)  
- `size()`, `empty()`, `clear()`  
- Concatenation and substring support  
- Stream support (`cin`, `cout`)

---

## 🪶 Example Usage

```
#include <iostream>
#include "string.hpp" 

int main() {
    mystl::string s1("Hello");
    mystl::string s2("World");

    mystl::string s3 = s1 + " " + s2;
    std::cout << s3 << std::endl; 
    return 0;
}

```
---

# 🎸 Pattern matching

- [String Hashing](https://cp-algorithms.com/string/string-hashing.html)
- [Rabin-Karp Algorithm](https://cp-algorithms.com/string/rabin-karp.html)
- [Knuth–Morris–Pratt Algorithm(KMP)](https://cp-algorithms.com/string/prefix-function.html)
- [Z-function](https://cp-algorithms.com/string/z-function.html)

---

# ✈️ Trie

- [Trie Tutorial](https://www.geeksforgeeks.org/dsa/trie-insert-and-search)

- [Suffix Tries for Pattern matching](https://www.geeksforgeeks.org/dsa/pattern-searching-using-suffix-tree)


## 🕊 Trie with XoR

- [Maximum XOR of Two Numbers in an Array](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array)
- [Maximum Subarray XOR](https://www.geeksforgeeks.org/dsa/find-the-maximum-subarray-xor-in-a-given-array)
- [Subarrays XOR less than K](https://www.hackerearth.com/problem/algorithm/subarrays-xor)
