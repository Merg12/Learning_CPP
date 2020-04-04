#include <iostream>
#include <map>

int main()
{
    std::multimap<std::string, std::string> families;

    for(std::string last_name, first_name; std::cin >> last_name >> first_name; families.emplace(last_name, first_name))
        ;
    
    for(const auto& s : families)
    {
        std::cout << s.second << " " << s.first << std::endl;
    }
}