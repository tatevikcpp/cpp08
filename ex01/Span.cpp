#include "Span.hpp"
#include <algorithm>
#include <vector>
#include <stdio.h>

Span::Span() : _size(0) {}

Span::Span(unsigned int N) /* : _vec(N) */
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_size = N;
    this->_vec.reserve(N);
    // std::cout << "lalala = " << this->_vec.size() << std::endl;
    // std::cout << "lalala = " << this->_vec.capacity() << std::endl;
 
}

// Span::Span(const Span& obj)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     this->_size = obj._size;
//     std::vector<int> vec1(obj._size); // obj._vec.capasity ?
//     // std::cout << "size = "<< vec1.size() << std::endl;
//     this->_vec = vec1;
//     // std::cout << "size _vec = "<< _vec.size() << std::endl;
//     for(size_t i = 0; i < obj._size; ++i)
//     {
//         // std::cout << "obj._vec[i] = " << obj._vec[i] << std::endl;
//         if (obj._vec[i] != *(obj._vec.end() - 1)){
//             this->_vec[i] = obj._vec[i];
//             // std::cout << "lalala\n";
//         }
//         else{
//             this->_vec[i] = *(obj._vec.end() - 1);
//             return ;
//         }
//     }
//     // std::vector<int>vec 
// }


// Span::Span(const Span& obj)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     this->_size = obj._size;
//     std::vector<int> vec1;
//     this->_vec = vec1;
//     if (obj._vec.empty())
//         return ;
//     for(size_t i = 0; i < obj._size; ++i)
//     {
//         if (obj._vec[i] != *(obj._vec.end() - 1))
//             this->_vec[i] = obj._vec[i];
//         else
//         {
//             this->_vec[i] = *(obj._vec.end() - 1);
//             break ;
//         }
//     }
// }

Span::Span(const Span& obj) : _vec(obj._vec)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_size = obj._size;
}

Span::~Span() {}

// Span& Span::operator=(const Span& obj)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     if (this != &obj)
//     {
//         this->_size = obj._size;
//         std::cout << "size _vec = "<< _vec.size() << std::endl;
//         // this->_vec.
//         for(size_t i = 0; i < obj._size; ++i)
//         {
//             if (obj._vec[i] != *(obj._vec.end() - 1))
//                 this->_vec[i] = obj._vec[i];
//             else
//             {
//                 this->_vec[i] = *(obj._vec.end() - 1);
//                 // return ;
//                 break ;
//             }
//         }
//     }
//     return (*this);
// }

 Span& Span::operator=(const Span& obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
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
        throw ("lalalal");
        // std::cout << "lalala = " << this->_vec.size() << std::endl;
        // return ;
    }
    this->_vec.push_back(a);
}

int Span::longestSpan()
{
    if (this->_vec.size() < 2)
    {
        throw ("lalalala");
    }
    int x = *std::max_element(this->_vec.begin(), this->_vec.end()) - 
        *std::min_element(this->_vec.begin(), this->_vec.end());
    return (x);
}


// int min_span(std::vector<int> vec)
// {
//     std::sort(vec.begin(), vec.end());
//     // std::cout << "vec.end() = "<< vec[vec.size() - 1] << std::endl;
//     // std::cout << "vec.begin() = "<< vec[0] << std::endl;

//     // int min = vec.end() - vec.begin();
//     int min = vec[vec.size() - 1] - vec[0];
//     // std::cout <<"stex = "<< min << std::endl; 
//     int span = 0;
//     for(size_t i = 0; i < vec.size() - 1; ++i)
//     {
//         // if (i + 1 >= vec.size())
//         //     return (0); 
//         // std::cout << vec[i + 1] - vec[i] << " ";
//         span = vec[i + 1] - vec[i];
//         std::cout << span << " ";
//         if (span < min)
//             min = span;
//     }
//     return (min);
// }

int Span::shortestSpan()
{
    if (this->_vec.size() < 2)
    {
        throw ("lalalala");  //05-ic heto ))
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

// void Span::addmanyNum(const std::vector<int>::iterator &position, const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
// {
//     std::vector<int> vec;
//     for (std::vector<int>::iterator it = begin; it < end; ++it)
//     {
//         vec.push_back()
//     }
// }
