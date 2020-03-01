#include <iostream>

void dontFindAcenders(const std::string& word)
{
    int cnt = 0;
    std::string::size_type pos = 0;
    std::string Acenders("bdfhijklt");
    while((pos = word.find_first_not_of(Acenders, pos)) != std::string::npos)
    {
        std::cout << word[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}

void dontFindDecenders(const std::string& word)
{
    int cnt = 0;
    std::string::size_type pos = 0;
    std::string Decenders("jpqy");
    while((pos = word.find_first_not_of(Decenders, pos)) != std::string::npos)
    {
        std::cout << word[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}

void countNeitherAcenderDecenders()
{

}

int main()
{
    std::string word("jirojksldjfoivjidsjejtkldjflasjvkcmvkldghaajoijpqaszxvcmjkjkjl");
    dontFindAcenders(word);
    dontFindDecenders(word);
}