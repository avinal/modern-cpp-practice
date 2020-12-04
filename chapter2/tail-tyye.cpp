/*
 * \mnt\z\my_git\modern-cpp-practice\chapter2\tail-tyye.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Using Tail Type Inference
*/

#include <iostream>

template <typename T, typename U>
auto add(T x, U y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    auto w = add<int, double>(1, 2.8);
    if (std::is_same<decltype(w), double>::value)
    {
        std::cout << "w is double: ";
    }
    std::cout << w << std::endl;
    return 0;
}
