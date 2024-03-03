# C++ Version Checker

A simple C++ program to determine the C++ standard version supported by your compiler.

**Features**

* Detects major C++ versions (C++98, C++11, C++14, C++17, C++20, C++23)
* Uses feature test macros for reliable detection.
* Future-proof design for easy updates when new C++ standards are released.

**Usage**

1. Compile the `cpp-version-checker.cpp` file using your C++ compiler.
2. Run the resulting executable.

**Example Output**

```
C++17
201703L
```

**Updating for Future C++ Versions**

1. Update the `cpp_versions` map in `cpp-version-checker.cpp` with the `__cplusplus` macro value and the corresponding version string.
2. Optionally, add more feature test macros within the `get_cpp_version` function to refine detection for future C++ standards.
