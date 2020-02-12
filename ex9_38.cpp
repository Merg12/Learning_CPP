#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> strVec;
    std::string word;

    while(std::cin >> word)
    {
        strVec.push_back(word);
        std::cout << "element count: " << strVec.size() << std::endl;
        std::cout << "capacity count: " << strVec.capacity() << std::endl;
    }
}