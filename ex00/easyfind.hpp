

#ifndef EASYFIND_HPP 
#define EASYFIND_HPP
#include <string>
#include <iostream>

template <typename T>
int easyfind(T container, int value)
{
    int i = 0;

    for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == value)
            return (i);
        i++;
    }
    return (-1);
} 


#endif