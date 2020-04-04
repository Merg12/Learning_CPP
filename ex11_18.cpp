#include <iostream>
#include <map>
#include <utility>

int main()
{
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

    for(const auto& each_word : word_count)
    {
        std::cout << each_word.first << " " <<each_word.second << ((each_word.second > 1) ? " times" : " time") << std::endl;
    }
}