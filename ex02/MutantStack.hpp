#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
    public:
        MutantStack() {};
        MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}
        ~MutantStack() {};
        MutantStack& operator=(const MutantStack& obj)
        {
            std::stack<T>::operator=(obj);
        }
        iterator begin() {
            return (this->c.begin());
        };
        iterator end() {
            return (this->c.end());
        };
};

// template <typename T>
// typename MutantStack<T>::iterator begin()
// {
//     return (this->c.begin());
// }

// template <typename T>
// typename MutantStack<T>::iterator end()
// {
//     return (this->c.end());
// }