#include <iostream>
#include <map>
#include <utility>

int main()
{
    std::cout << "Please enter some duplicate and unique words, and I'll tell you how many times its been repeated\n";
    
    std::map<std::string, size_t> word_count;
    std::string word;

    while(std::cin >> word)
    {
        auto ret = word_count.insert(std::make_pair(word, 1));

        if(!ret.second)
        {
            ++ret.first->second;
        }
    }

    for(const auto& each : word_count)
    {
        std::cout << each.first << " and " << each.second << std::endl;
    }
}