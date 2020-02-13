#include <iostream>

void find_Numeric(const std::string word)
{
    std::string::size_type pos = 0;
    std::string numbers("0123456789");
    while((pos = word.find_first_of(numbers, pos)) != std::string::npos)
    {
        std::cout << word[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}

void find_Alphabetic(const std::string word)
{
    std::string::size_type pos = 0;
    std::string numbers("0123456789");
    while((pos = word.find_first_not_of(numbers, pos)) != std::string::npos)
    {
        std::cout << word[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}

int main()
{
    std::string password("hwei1343kjaDSHFLA3245343ksld234254343543424fjei");
    find_Alphabetic(password);
    find_Numeric(password);
}