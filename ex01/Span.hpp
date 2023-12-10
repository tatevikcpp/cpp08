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
        void print();
        template<typename T>
        void addmanyNum(T begin, T end)
        {
            for (; begin != end; ++begin)
                _vec.push_back(*begin);
        }
        unsigned int shortestSpan();
        unsigned int longestSpan();

    private:
        unsigned int _size;
        std::vector<int> _vec;
};