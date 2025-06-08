## ⏰ mystl::string

A lightweight, custom implementation of the standard `std::string` class, providing essential string operations with dynamic memory management.

---

## 💵 Features

- Dynamic character storage  
- Copy and move semantics  
- Operator overloading (`+`, `=`, `[]`, `==`, `!=`, etc.)  
- `size()`, `empty()`, `clear()`  
- Concatenation and substring support  
- Stream support (`cin`, `cout`)

---

### 🪶 Example Usage

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

## 🎸 Pattern matching
TBD

---

## ✈️ Trie
TBD
