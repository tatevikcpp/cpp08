#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& cant, int val)
{
    return (std::find(cant.begin(), cant.end(), val));
}