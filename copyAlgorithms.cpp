#include <iostream>
#include <algorithm>

int main()
{
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[] = {sizeof(a1)/sizeof(a1[0])};

    for(auto& i : a2)
    {
        std::cout << i << std::endl;
    }

    auto ret = std::copy(std::begin(a1), std::end(a1), a2);

    for(int i = 0; i != *(std::end(a2)-1); ++i)
    {
        std::cout << a2[i] << std::endl;
    }

    std::cout << *ret << std::endl;
}