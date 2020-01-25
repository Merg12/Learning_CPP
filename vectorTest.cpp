#include <iostream>
#include <vector>

int main()
{
    std::vector<char> vec(5, 'a');
    for(auto& a : vec)
    {
        std::cout << a << std::endl;
    }
    return 0;
}