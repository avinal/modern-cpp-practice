/*
 * \mnt\z\my_git\modern-cpp-practice\chapter2\if-switch.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Variables and initialization
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> num{1, 2, 3, 4};
    auto itr = std::find(num.begin(), num.end(), 2);
    if (itr != num.end())
    {
        *itr = 3;
    }
    if (auto itr = std::find(num.begin(), num.end(), 3); itr != num.end())
    {
        *itr = 4;
    }
    for (auto &&i : num)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
