

#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> a;

    for (int i = 0; i < 10; i++)
        a.push(i);
    for (std::stack<int>::container_type::iterator it = a.begin(); it != a.end(); it++)
    {
        std::cout << *it << std::endl;
    }

}