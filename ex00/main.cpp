#include "easyfind.hpp"

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
#include <array>      // std::array

int main () 
{
    const int count = 4;
    // using std::find with array and pointer:
    // int myints[] = { 10, 20, 30, 40 };
    // int * p;

    // p = std::find (myints, myints+4, 30);
    // // p = easyfind(myints, 30);
    // if (p != myints+4)
    //     std::cout << "Element found in myints: " << *p << '\n';
    // else
    //     std::cout << "Element not found in myints\n";

    // using std::find with vector and iterator:
    std::vector<int> myvector (myints,myints+4);
    std::vector<int>::iterator it;

    // std::array<int, count> myarray(myints);
    std::array<int, 4> myarray = { 10, 20, 30, 40 };
    // std::array<int, 3> myarray(my;

    std::array<int, count>::iterator it;

    // // it = find (myvector.begin(), myvector.end(), 30);
    // it =  easyfind(myvector, 30);
    it =  easyfind(myarray, 31);
    
    if (it != myarray.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";

    return 0;
}