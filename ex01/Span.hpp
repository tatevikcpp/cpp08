#pragma once
#include <iostream>
#include <vector>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        ~Span();
        Span& operator=(const Span& obj);
        void addNumber(int a);
        // void addmanyNum();
        void print()
        {
            for (size_t i = 0; i < _vec.size(); ++i)
                std::cout << _vec[i] << std::endl;
        }
        template<typename T>
        void addmanyNum(T begin, T end)
        {
            // std::vector<int>::iterator i;
            // std::vector<int>::iterator end = _vec.end();
            // std::vector<int>::iterator begin = _vec.begin();


            for (; begin != end; ++begin)
                _vec.push_back(*begin);
                // std::cout << *begin << std::endl;
        }
        int shortestSpan();
        int longestSpan();

    private:
        unsigned int _size;
        std::vector<int> _vec;
};