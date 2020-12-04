/*
 * /mnt/z/my_git/modern-cpp-practice/chapter2/initializer-list.cpp
 * @author Avinal Kumar
 * @since December 04, 2020
 *
 * Initializer list in modern C++
*/

#include <iostream>
#include <vector>

class Foo
{
public:
    int value_a;
    int value_b;
    Foo(int a, int b) : value_a(a), value_b(b) {}
};

int main(int argc, char const *argv[])
{
    int arr[3]{1, 2, 3};
    Foo foo(1, 2);
    std::vector<int> num = {1, 2, 3, 4, 5};

    std::cout << "arr[0]: " << arr[0] << std::endl;
    std::cout << "foo: " << foo.value_a << ", " << foo.value_b << std::endl;

    for (auto &&i : num)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
