#include "easyfind.hpp"
#include <iostream>   
#include <vector>
// #include <array> 

int main () 
{
    int myints[] = { 10, 20, 30, 40 };
    std::vector<int> myvector (myints,myints + 4);
    std::vector<int>::iterator it;
    
    it =  easyfind(myvector, 30);
    if (it != myvector.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";
    return 0;
}