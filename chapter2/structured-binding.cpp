/*
 * \mnt\z\my_git\modern-cpp-practice\chapter2\structured-binding.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Using Structured binding
*/

#include <iostream>
#include <tuple>

std::tuple<int, double, std::string> fun()
{
    return std::make_tuple(1, 2.3, "456");
}

int main(int argc, char const *argv[])
{
    auto [x, y, z] = fun();
    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}
