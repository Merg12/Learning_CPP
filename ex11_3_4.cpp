#include <iostream>
#include <map>
#include <algorithm>

void word_count_pro(std::map<std::string, int> mapObject)
{
    std::string word;
    while(std::cin >> word)
    {
        for(auto& ch : word)
        {
            ch = tolower(ch);
        }

        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
    
        ++mapObject[word];
    
    }

    for(const auto& e : mapObject)
    {
        std::cout << e.first << " and " << e.second << std::endl;
    }
}

int main()
{
    std::map<std::string, int> mapObject;
    std::cout << "Enter some repeating words bruh" << std::endl;
    word_count_pro(mapObject);
}