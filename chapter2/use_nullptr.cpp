/*
 * /mnt/z/my_git/modern-cpp-practice/chapter2/use_nullptr.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Why use nullptr instead of NULL and 0
*/

#include <iostream>
#include <type_traits>

void foo(char *);
void foo(int);

int main(int argc, char const *argv[])
{
    if (std::is_same<decltype(NULL), decltype(0)>::value)
    {
        std::cout << "NULL == 0" << std::endl;
    }
    if (std::is_same<decltype(NULL), decltype((void *)0)>::value)
    {
        std::cout << "NULL == (void *)0" << std::endl;
    }
    if (std::is_same<decltype(NULL), std::nullptr_t>::value)
    {
        std::cout << "NULL == nullptr" << std::endl;
    }

    foo(0); //calls foo(int)
    // foo(NULL); // doesn't compile
    foo(nullptr); // calss foo(char*)
    return 0;
}

void foo(int)
{
    std::cout << "foo(int) is called" << std::endl;
}

void foo(char *)
{
    std::cout << "foo(char*) is called" << std::endl;
}
