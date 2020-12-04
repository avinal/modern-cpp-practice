/*
 * /mnt/z/my_git/modern-cpp-practice/chapter1/modern-1-1.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * main function and implementation
*/

#include "foo.h"
#include <iostream>
#include <functional>

int main(int argc, char const *argv[])
{
    [out = std::ref(std::cout << "Result from C code: " << add(1, 2))]() {
        out.get() << ".\n";
    }();
    return 0;
}
