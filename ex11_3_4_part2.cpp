#include <iostream>
#include <algorithm>
#include <map>

int main()
{
    std::map<std::string, int> wordCnt;

    std::string word;

    while(std::cin >> word)
    {
        ++wordCnt[word];
    }

    for(const auto& elem : wordCnt)
    {
        std::cout << elem.first << " then " << elem.second << std::endl;
    }
}