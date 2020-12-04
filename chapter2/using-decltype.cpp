/*
 * \mnt\z\my_git\modern-cpp-practice\using-decltype.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Using decltype 
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    auto x = 1;
    auto y = 2;
    decltype(x + y) z;
    if (std::is_same<decltype(x), int>::value)
    {
        std::cout << "type x == int" << std::endl;
    }
    if (std::is_same<decltype(x), float>::value)
    {
        std::cout << "type x == float" << std::endl;
    }
    if (std::is_same<decltype(x), decltype(z)>::value)
    {
        std::cout << "type z == type x" << std::endl;
    }
    return 0;
}
