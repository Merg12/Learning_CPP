#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    char arr[10] = {'h', 'w', 's'};
    char arr2[10] = "Julie10";

    std::vector<char*> v_char = {arr};
    std::list<char*> v_char2 = {arr2};

    bool equali = equal(v_char.cbegin(), v_char.cend(), v_char2.cbegin());

    for(const auto& i : v_char)
    {
        std::cout << i << " next " << std::endl;
    }

    for(const auto& i : v_char2)
    {
        std::cout << i << " next " << std::endl;
    }

    std::cout << equali << std::endl;
}