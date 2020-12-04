/*
 * \mnt\z\my_git\modern-cpp-practice\chapter2\initializer-list.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Using Initializer list
*/

#include <initializer_list>
#include <vector>
#include <iostream>

class MagicFoo
{
public:
    std::vector<int> num;
    MagicFoo(std::initializer_list<int> list)
    {
        for (auto &&i : list)
        {
            num.push_back(i);
        }
    }
};

int main(int argc, char const *argv[])
{
    MagicFoo magicfoo{1, 2, 3, 4, 5};

    std::cout << "magicFoo: ";
    for (auto &&i : magicfoo.num)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
