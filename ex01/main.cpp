#include "Span.hpp"
#include <vector>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    std::vector<int> vec;
    for (int i = 0; i < 10;++i)
    {
        vec.push_back(i);
    }
    // Span sp = Span(5);
    Span sp;
    sp = Span(5);
    // sp.addmanyNum();
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(10); 
    sp.addNumber(20);

    sp.addmanyNum(vec.begin(), vec.end());
    sp.addmanyNum(a, a + (sizeof(a) / sizeof(int)));

    sp.print();

    std::cout << std::endl;
    Span spp = sp; // verji 0-nery ??

    // sp.addNumber(9);
    // sp.addNumber(11);
    // sp.addNumber(11);
    // sp.addNumber(11);

    // spp.print();
    std::cout << "short = "<< sp.shortestSpan() << std::endl;
    std::cout << "long = "<< sp.longestSpan() << std::endl;
    return 0;
}


// void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
// {
//     // std::vector<int>::iterator i;
//     // std::vector<int>::iterator end = _vec.end();
//     // std::vector<int>::iterator begin = _vec.begin();


//     for (; begin != end; ++begin)
//         std::cout << *begin << std::endl;
// }

// int main()
// {
//     std::vector<int> vec;
//     for (int i = 0; i < 10;++i)
//     {
//         vec.push_back(i);
//     }
//     print(vec.begin(), vec.end());
// }