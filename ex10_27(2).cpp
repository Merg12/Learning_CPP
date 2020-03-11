//this is by pezy

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

int main()
{
    std::vector<int> vec{3, 5, 1, 5, 1, 7, 3, 7, 9};
    std::list<int> lst;

    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));
    for (auto i : lst) std::cout << i << " ";
    std::cout << std::endl;
}