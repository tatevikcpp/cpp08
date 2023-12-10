#include "Span.hpp"
#include <algorithm>
#include <vector>
#include <stdio.h>

Span::Span() : _size(0) {}

Span::Span(unsigned int N)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_size = N;
    this->_vec.reserve(N);
}

Span::Span(const Span& obj) : _vec(obj._vec)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_size = obj._size;
}

Span::~Span() {}

Span& Span::operator=(const Span& obj)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &obj)
    {
        this->_vec = obj._vec;
        this->_size = obj._size;
    }
    return (*this);
}

void Span::addNumber(int a)
{
    if (this->_vec.size() >= this->_size)
    {
        throw std::runtime_error("too many integers");
    }
    this->_vec.push_back(a);
}

unsigned int Span::longestSpan()
{
    if (this->_vec.size() < 2)
    {
        throw std::runtime_error("too few integers");
    }
    int x = *std::max_element(this->_vec.begin(), this->_vec.end()) - 
        *std::min_element(this->_vec.begin(), this->_vec.end());
    return (x);
}

unsigned int Span::shortestSpan()
{
    if (this->_vec.size() < 2)
    {
        throw std::runtime_error("too few integers");
    }
    std::sort(this->_vec.begin(), this->_vec.end());
    int min = this->_vec[this->_vec.size() - 1] - this->_vec[0]; // optimizacnel
    int span = 0;
    for(size_t i = 0; i < this->_vec.size() - 1; ++i)
    {
        span = this->_vec[i + 1] - this->_vec[i];
        if (span < min)
            min = span;
    }
    return (min);
}
