#include <iostream>
#include <limits>
#include <unordered_map>

std::unordered_map<long long, std::string> cpp_versions = {
    {202302L, "C++23"},
    {202002L, "C++20"}, 
    {201703L, "C++17"},
    {201402L, "C++14"},
    {201103L, "C++11"},
    {199711L, "C++98"} 
};

std::string get_cpp_version(long long cpp_macro) {

    if (cpp_versions.contains(cpp_macro)) {
        return cpp_versions[cpp_macro];
    } 

    #if defined(__cpp_lib_some_future_feature) 

        return "C++ (Future Version - Supports some_future_feature)"; 
    #else 
        return "C++ (Future Version)";
    #endif
}

int main() {
    std::cout << get_cpp_version(__cplusplus) << std::endl;

    std::cout << "Numeric __cplusplus value: " 
              << (std::numeric_limits<long long>::max() >= __cplusplus ? 
                  std::to_string(__cplusplus) : 
                  "Value exceeds representable range")
              << std::endl;

    return 0;
}