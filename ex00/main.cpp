
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::vector<int> arr;
    for (int i = 0; i < 6; i++)
    {
        arr.push_back(i);
    }
    std::cout << easyfind(arr, 3) << std::endl;
    std::cout << easyfind(arr, -4) << std::endl;


    std::list<int> arrs;
    for (int i = 0; i < 6; i++)
    {
        arrs.push_back(i);
    }
    std::cout << easyfind(arrs, 5) << std::endl;
    std::cout << easyfind(arrs, -4) << std::endl;

}